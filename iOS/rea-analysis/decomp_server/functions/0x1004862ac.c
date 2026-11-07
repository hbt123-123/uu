// rea decompile_all
// name: FUN_1004862ac
// address: 0x1004862ac
// body: available
// range: 0x1004862ac-0x100486337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004862ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  param_1[3] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar3 = lVar6;
  uVar4 = uVar1;
  uVar5 = uVar2;
  if (lVar6 == 0) {
    lVar3 = 0;
    FUN_100492e44();
    _swift_initStaticObject();
    uVar4 = 0;
    uVar5 = 0xc000000000000000;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = lVar3;
  FUN_100481814(uVar1,uVar2,lVar6);
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = FUN_100486338;
  return auVar7;
}

