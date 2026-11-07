// rea decompile_all
// name: FUN_1000d7168
// address: 0x1000d7168
// body: available
// range: 0x1000d7168-0x1000d7373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d7168(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  code *pcVar8;
  ulong local_70;
  ulong uStack_68;
  
  uVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  uVar4 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar4);
  __s10Foundation3URLV4pathSSvg();
  pcVar8 = *(code **)(lVar7 + 8);
  uVar3 = uVar4;
  uVar5 = uVar1;
  (*pcVar8)();
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar4);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar8)(uVar4,uVar1);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      if ((uVar3 != uVar2 || uVar5 != param_2) &&
         (uVar1 = uVar3,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar3,uVar5,uVar2,param_2,0), (uVar1 & 1) == 0)) {
        local_70 = uVar2;
        uStack_68 = param_2;
        _swift_bridgeObjectRetain(param_2);
        __sSS6appendyySSF(0x2f,0xe100000000000000);
        uVar1 = uStack_68;
        uVar4 = local_70;
        uVar6 = uVar5;
        __sSS9hasPrefixySbSSF(local_70,uStack_68,uVar3,uVar5);
        _swift_bridgeObjectRelease(uVar1);
        if ((uVar4 & 1) != 0) {
          __sSS5countSivg(uVar2,param_2);
          _swift_bridgeObjectRelease(param_2);
          lVar7 = uVar2 + 1;
          if (!SCARRY8(uVar2,1)) {
            uVar1 = uVar5;
            FUN_1001dff9c(lVar7,uVar3,uVar5);
            _swift_bridgeObjectRelease(uVar5);
            __sSS14_fromSubstringySSSshFZ(lVar7,uVar3,uVar1,uVar6);
            _swift_bridgeObjectRelease(uVar6);
            return;
          }
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1000d7374);
          (*pcVar8)();
        }
      }
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(param_2);
      __s10Foundation3URLV17lastPathComponentSSvg();
      return;
    }
  }
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(param_2);
  return;
}

