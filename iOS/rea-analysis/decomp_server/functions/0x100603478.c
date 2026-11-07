// rea decompile_all
// name: FUN_100603478
// address: 0x100603478
// body: available
// range: 0x100603478-0x1006037eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006035a8 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100603478(long param_1,long param_2,long param_3,undefined4 *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  if (param_1 == 0) {
    _swift_beginAccess(&PTR_FUN_100aafed0,&local_88,0,0);
    uVar2 = DAT_100aafed8;
    puVar1 = PTR_FUN_100aafed0;
    _swift_retain(DAT_100aafed8);
    (*(code *)puVar1)(0,0,0);
  }
  else {
    local_88 = (undefined1 *)0x0;
    uVar2 = 0;
    FUN_100602d8c(0);
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (param_3,&local_88,uVar2);
    puVar7 = local_88;
    if (local_88 == (undefined1 *)0x0) {
      local_88 = (undefined1 *)0x0;
      local_80 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x22);
      __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008beb80);
      uVar2 = 0;
      local_90 = param_3;
      FUN_100603254(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_90,&local_88,uVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008beba0);
      uVar8 = local_80;
      puVar7 = local_88;
      _swift_beginAccess(&PTR_FUN_100aafed0,&local_88,0,0);
      uVar2 = DAT_100aafed8;
      pcVar9 = (code *)PTR_FUN_100aafed0;
      _swift_retain(DAT_100aafed8);
      uVar4 = 1;
    }
    else {
      puVar3 = local_88;
      FUN_100602bc8();
      _swift_bridgeObjectRelease(puVar7);
      lVar10 = *(long *)(puVar3 + 0x10);
      if (lVar10 == param_2) {
        _swift_retain(param_1);
        if (param_2 != 0) {
          puVar11 = (undefined8 *)(puVar3 + 0x28);
          do {
            local_88 = (undefined1 *)puVar11[-1];
            uVar2 = *puVar11;
            local_78 = *param_4;
            local_70 = *param_5;
            local_74 = 0;
            local_68 = 0;
            pcVar9 = *(code **)(param_1 + 0x18);
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            local_80 = uVar2;
            _swift_bridgeObjectRetain(uVar2);
            _swift_retain(uVar8);
            (*pcVar9)(&local_88);
            _swift_bridgeObjectRelease(uVar2);
            _swift_release(uVar8);
            puVar11 = puVar11 + 2;
            param_2 = param_2 + -1;
            param_5 = param_5 + 1;
            param_4 = param_4 + 1;
          } while (param_2 != 0);
        }
        _swift_release(param_1);
        _swift_bridgeObjectRelease(puVar3);
        return;
      }
      _swift_bridgeObjectRelease(puVar3);
      local_88 = (undefined1 *)0x0;
      local_80 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x2b);
      _swift_bridgeObjectRelease(local_80);
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      puVar1 = PTR___sSiN_100995968;
      local_88 = &DAT_d000000000000010;
      local_80 = 0x80000001008bebc0;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_90 = param_2;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      __sSS6appendyySSF(0xd000000000000016,0x80000001008bebe0);
      local_90 = lVar10;
      __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar6);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      __sSS6appendyySSF(0x60,0xe100000000000000);
      uVar8 = local_80;
      puVar7 = local_88;
      _swift_beginAccess(&PTR_FUN_100aafed0,&local_88,0,0);
      uVar2 = DAT_100aafed8;
      pcVar9 = (code *)PTR_FUN_100aafed0;
      _swift_retain(DAT_100aafed8);
      uVar4 = 2;
    }
    (*pcVar9)(uVar4,puVar7,uVar8);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_release(uVar2);
  return;
}

