// rea decompile_all
// name: FUN_1007c6e58
// address: 0x1007c6e58
// body: available
// range: 0x1007c6e58-0x1007c6fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1007c6e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::height) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::width) = param_4;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::duration) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::frameCount) = param_5;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::frameRate) = param_6;
  lVar1 = unaff_x20 + _TtC6Sentry15SentryVideoInfo::start;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar7 + 0x10);
  (*pcVar6)(lVar1,param_7,lVar2);
  (*pcVar6)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::end,param_8,lVar2);
  lVar1 = unaff_x20 + _TtC6Sentry15SentryVideoInfo::path;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(lVar1,param_2,lVar3);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::fileSize) = param_9;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::screens) = param_10;
  FUN_1007c6d70();
  _swift_bridgeObjectRetain(param_10);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  pcVar6 = *(code **)(lVar7 + 8);
  (*pcVar6)(param_8,lVar2);
  (*pcVar6)(param_7,lVar2);
  (**(code **)(lVar5 + 8))(param_2,lVar3);
  return IVar4;
}

