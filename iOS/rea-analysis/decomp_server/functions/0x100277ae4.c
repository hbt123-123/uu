// rea decompile_all
// name: FUN_100277ae4
// address: 0x100277ae4
// body: available
// range: 0x100277ae4-0x100277c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100277ae4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [12];
  undefined4 local_64;
  
  puVar1 = &DAT_100a82460;
  local_64 = param_6;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar4 = auStack_70 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar4 - (*(long *)(*(long *)(param_8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_8 + -8) + 0x10))(lVar6);
  lVar2 = 0;
  FUN_100277ad0();
  puVar3 = puVar4;
  _swift_dynamicCast(puVar4,lVar6,param_8,lVar2,6);
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  if ((int)puVar3 != 0) {
    (*pcVar5)(puVar4,0,1,lVar2);
    FUN_1000823d8(puVar4,param_1,FUN_100277ad0);
    return;
  }
  (*pcVar5)(puVar4,1,1,lVar2);
  puVar1 = &DAT_100a82460;
  FUN_100040bb4(puVar4,&DAT_100a82460,&DAT_1008175c0);
  (*param_2)();
  *(undefined4 *)(lVar6 + -8) = 0;
  *(undefined8 *)(lVar6 + -0x10) = param_7;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,puVar4,puVar1,param_4,param_5,local_64);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100277c6c);
  (*pcVar5)();
}

