// rea decompile_all
// name: FUN_100229f7c
// address: 0x100229f7c
// body: available
// range: 0x100229f7c-0x10022a083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100229f7c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + FCountAppConfig::appKey);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lVar2 = FCountAppConfig::apiHost;
  if (DAT_100a7dde8 != -1) {
    _swift_once(&DAT_100a7dde8,FUN_1002238e0);
  }
  uVar3 = 0;
  __s10Foundation3URLVMa();
  puVar4 = &DAT_100b362e8;
  FUN_10021bec0();
  __s10Foundation3URLV14absoluteStringSSvg();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  ((undefined8 *)(unaff_x20 + lVar2))[1] = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + FCountAppConfig::uid);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + FCountAppConfig::uploadTimeInterval) = 0x4008000000000000;
  *(undefined8 *)(unaff_x20 + FCountAppConfig::globalExtraPrameters) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + FCountAppConfig::globalExtraPrametersProvider);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + FCountAppConfig::shouldAutoPushPageViewEvent) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + FCountAppConfig::customLogger);
  FUN_10022a084();
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}

