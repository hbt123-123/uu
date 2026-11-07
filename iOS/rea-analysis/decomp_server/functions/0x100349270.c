// rea decompile_all
// name: FUN_100349270
// address: 0x100349270
// body: available
// range: 0x100349270-0x100349393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100349270(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  
  _swift_allocObject();
  puVar2 = &DAT_100a86ef0;
  FUN_100004bb4(&DAT_100a86ef0,&DAT_10081ae80);
  lVar3 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar6 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar2,uVar7 + *(long *)(lVar6 + 0x48),uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  __s10Foundation8URLErrorV4CodeV21networkConnectionLostAEvgZ(puVar2 + uVar7);
  puVar4 = puVar2;
  FUN_100347f1c();
  _swift_setDeallocating(puVar2);
  (**(code **)(lVar6 + 8))(puVar2 + uVar7,lVar3);
  _swift_deallocClassInstance(puVar2,0x20,7);
  if (1 < param_3) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_2;
    *(ulong *)(unaff_x20 + 0x18) = param_3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    puVar2 = PTR___swiftEmptySetSingleton_100995eb0;
    *(undefined8 *)(unaff_x20 + 0x28) = param_4;
    *(undefined **)(unaff_x20 + 0x30) = puVar2;
    *(undefined **)(unaff_x20 + 0x38) = puVar4;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100349394);
  (*pcVar1)();
}

