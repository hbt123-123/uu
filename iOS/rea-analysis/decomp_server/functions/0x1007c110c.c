// rea decompile_all
// name: FUN_1007c110c
// address: 0x1007c110c
// body: available
// range: 0x1007c110c-0x1007c124f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007c110c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::fileSize);
  uVar1 = param_1;
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_TtC6Sentry15SentryVideoInfo::start);
  uVar10 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::duration);
  uVar7 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::frameCount);
  uVar8 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::frameRate);
  uVar9 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::height);
  uVar5 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::width);
  puVar2 = &DAT_100abcdd8;
  FUN_1007b4550(&DAT_100abcdd8);
  uVar3 = param_3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,puVar2);
  IVar4 = _objc_msgSend(unaff_x20,
                        "initWithSegmentId:size:start:duration:frameCount:frameRate:height:width:extraEvents:"
                        ,uVar10,param_1,uVar6,uVar1,uVar7,uVar8,uVar9,uVar5,uVar3);
  _swift_bridgeObjectRelease(param_3);
  return IVar4;
}

