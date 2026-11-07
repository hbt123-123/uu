// rea decompile_all
// name: FUN_1007bc9ac
// address: 0x1007bc9ac
// body: available
// range: 0x1007bc9ac-0x1007bccc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007bc9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar5 + -8);
  lVar8 = (long)&local_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    return;
  }
  if (DAT_100abba18 != -1) {
    _swift_once(&DAT_100abba18,FUN_1007bc824);
  }
  if (param_4 < DAT_100b3a8b8) {
    if (DAT_100abcb40 != '\x01') {
      return;
    }
    if (DAT_100abba10 != -1) {
      _swift_once(&DAT_100abba10,FUN_1007bc814);
    }
    if (param_4 < DAT_100b3a8b0) {
      return;
    }
  }
  if (DAT_100abba30 != -1) {
    _swift_once(&DAT_100abba30,FUN_1007bc890);
  }
  IVar6 = _objc_msgSend(DAT_100abcb58,"date");
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar8,IVar6);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg(0);
  (**(code **)(lVar9 + 8))(lVar8,lVar5);
  if (DAT_100abba20 != -1) {
    _swift_once(&DAT_100abba20,FUN_1007bc834);
  }
  uVar3 = DAT_100abcb48;
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  _swift_retain(DAT_100abcb48);
  __ss11_StringGutsV4growyySiF(0x2b);
  __sSS6appendyySSF(0x5d7972746e65535b,0xea00000000005b20);
  if (DAT_100abba58 != -1) {
    _swift_once(&DAT_100abba58,FUN_1007cdd44);
  }
  if (-1 < (long)param_4) {
    if (param_4 < *(ulong *)(DAT_100b3a970 + 0x10)) {
      lVar5 = DAT_100b3a970 + param_4 * 0x10;
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      __sSS6appendyySSF(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      __sSS6appendyySSF(0xd000000000000019,0x80000001008da9d0);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (param_1,&local_70,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x205d,0xe200000000000000);
      __sSS6appendyySSF(param_2,param_3);
      uVar2 = uStack_68;
      uVar1 = local_70;
      puVar7 = &DAT_100abcb88;
      FUN_1007b4550();
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1009957f8;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + 0x28) = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      __ss5print_9separator10terminatoryypd_S2StF
                (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
      _swift_release(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(puVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007bccb0);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1007bccac);
  (*pcVar4)();
}

