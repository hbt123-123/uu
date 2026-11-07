// rea decompile_all
// name: FUN_100079418
// address: 0x100079418
// body: available
// range: 0x100079418-0x1000794df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100079418(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_1001039e8 != -1) {
    _swift_once(&DAT_1001039e8,FUN_1000a2dbc);
  }
  lVar4 = DAT_100106ef8;
  uVar3 = DAT_100106ef0;
  lVar5 = DAT_100106ef8;
  if (DAT_100106ef8 == 0) {
    puVar1 = &DAT_100104680;
    FUN_10000eb08(&DAT_100104680,&DAT_1000d4e18);
    puVar2 = &stack0xffffffffffffffc8;
    __sSS10describingSSx_tclufC(puVar2,puVar1);
    uVar3 = 0x2d;
    lVar5 = -0x1f00000000000000;
    FUN_100078034(0x2d,0xe100000000000000,puVar2,puVar1);
    _swift_bridgeObjectRelease(puVar1);
    lVar4 = 0;
  }
  _swift_bridgeObjectRetain(lVar4);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}

