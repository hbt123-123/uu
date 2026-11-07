// rea decompile_all
// name: FUN_1000989d0
// address: 0x1000989d0
// body: available
// range: 0x1000989d0-0x100098b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000989d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,0x1000e22f4,&TargetProtocolRequirement_1000e230c);
  lVar4 = 0;
  FUN_100098548(0,uVar3);
  lVar1 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  (**(code **)(param_5 + 0x20))(puVar6,param_4,param_5);
  puVar5 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar4);
  if ((int)puVar5 == 1) {
    uVar3 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar1);
    (*(code *)*puVar6)(param_1,param_2,param_3);
    _swift_release(uVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  *(undefined4 *)((long)auStack_58 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_60 + lVar1) = 0x44;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000003f,0x80000001000ca950,"ArgumentParser/Parsed.swift"
             ,0x1b,2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100098b0c);
  (*pcVar2)();
}

