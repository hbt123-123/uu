// rea decompile_all
// name: FUN_100523898
// address: 0x100523898
// body: available
// range: 0x100523898-0x100523c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100523a04) */
/* WARNING: Removing unreachable block (ram,0x000100523ac0) */
/* WARNING: Removing unreachable block (ram,0x000100523a14) */

void FUN_100523898(ulong param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  
  lVar1 = param_2;
  FUN_1005336f8();
  if (unaff_x21 != 0) {
    return;
  }
  if ((lVar1 == 0x6e) && (param_3 == (undefined8 *)0xe100000000000000)) {
LAB_100523920:
    _swift_bridgeObjectRelease();
    FUN_100533688();
    if (((ulong)param_3 & 1) == 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,param_3,0,0);
      *param_3 = 0;
      param_3[1] = 0;
      _swift_willThrow();
    }
    else {
      FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      unaff_x20[1] = 1;
      *unaff_x20 = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    return;
  }
  uVar2 = 0;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x6e,0xe100000000000000,lVar1,param_3,0);
  if ((uVar2 & 1) != 0) goto LAB_100523920;
  if ((lVar1 != 0x5b) || (param_3 != (undefined8 *)0xe100000000000000)) {
    uVar2 = 0x5b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5b,0xe100000000000000,lVar1,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 != 0x7b) || (param_3 != (undefined8 *)0xe100000000000000)) {
        uVar2 = 0x7b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7b,0xe100000000000000,lVar1,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((lVar1 != 0x74) || (param_3 != (undefined8 *)0xe100000000000000)) {
            uVar2 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74,0xe100000000000000,lVar1,param_3,0);
            if (((uVar2 & 1) == 0) &&
               ((lVar1 != 0x66 || (param_3 != (undefined8 *)0xe100000000000000)))) {
              uVar2 = 0;
              uVar4 = 0xe100000000000000;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x66,0xe100000000000000,lVar1,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((lVar1 == 0x22) && (param_3 == (undefined8 *)0xe100000000000000)) {
                  _swift_bridgeObjectRelease();
                }
                else {
                  uVar2 = 0;
                  uVar4 = 0xe100000000000000;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x22,0xe100000000000000,lVar1,param_3,0);
                  _swift_bridgeObjectRelease();
                  if ((uVar2 & 1) == 0) {
                    FUN_1005337cc();
                    FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
                    *unaff_x20 = param_1;
                    unaff_x20[2] = 0x1000000000000000;
                    unaff_x20[1] = 0;
                    *(undefined1 *)(unaff_x20 + 3) = 0;
                    return;
                  }
                }
                FUN_10053317c();
                FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
                *unaff_x20 = (ulong)param_3;
                unaff_x20[1] = uVar4;
                unaff_x20[2] = 0x2000000000000000;
                *(undefined1 *)(unaff_x20 + 3) = 0;
                return;
              }
            }
          }
          _swift_bridgeObjectRelease();
          FUN_100533c30();
          FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
          *unaff_x20 = (ulong)param_3 & 1;
          unaff_x20[2] = 0x3000000000000000;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 3) = 0;
          return;
        }
      }
      _swift_bridgeObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1005b915c();
      FUN_1005205d0(param_2);
      FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      *unaff_x20 = (ulong)puVar3;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0xc000000000000000;
      goto LAB_100523a3c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10051f6d0(param_2);
  FUN_10051ff3c(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
  *unaff_x20 = (ulong)puVar3;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0xd000000000000000;
LAB_100523a3c:
  *(undefined1 *)(unaff_x20 + 3) = 1;
  return;
}

