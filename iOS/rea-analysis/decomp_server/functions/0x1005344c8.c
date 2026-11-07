// rea decompile_all
// name: FUN_1005344c8
// address: 0x1005344c8
// body: available
// range: 0x1005344c8-0x100534617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005344c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint extraout_w8;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  FUN_100535660();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_100534508;
LAB_1005344fc:
    uVar5 = 0xd;
  }
  else {
    if (lVar3 == unaff_x20[1] - lVar4) goto LAB_1005344fc;
LAB_100534508:
    if (*(char *)(lVar4 + lVar3) == '\"') {
      FUN_100535e6c();
      if (param_2 != (undefined8 *)0x0) {
        uVar1 = 0;
        if (((param_1 == (undefined8 *)0x65736c6166) &&
            (param_2 == (undefined8 *)0xe500000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x65736c6166,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 0;
          goto LAB_100534600;
        }
        if ((param_1 == (undefined8 *)0x65757274) && (param_2 == (undefined8 *)0xe400000000000000))
        {
          _swift_bridgeObjectRelease(0xe400000000000000);
        }
        else {
          uVar1 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x65757274,0xe400000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease();
          param_1 = param_2;
          if ((uVar1 & 1) == 0) goto LAB_1005345d0;
        }
        uVar2 = 1;
        goto LAB_100534600;
      }
LAB_1005345d0:
      uVar5 = 4;
    }
    else {
      uVar5 = 0xb;
    }
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar5;
  _swift_willThrow();
  uVar2 = extraout_w8;
LAB_100534600:
  return uVar2 & 1;
}

