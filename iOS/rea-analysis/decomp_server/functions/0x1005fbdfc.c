// rea decompile_all
// name: FUN_1005fbdfc
// address: 0x1005fbdfc
// body: available
// range: 0x1005fbdfc-0x1005fc35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005fbdfc(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  uVar2 = 0x656372756f73;
  if ((param_1 == (undefined1 *)0x656372756f73 && param_2 == -0x1a00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x656372756f73,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == (undefined1 *)0x6449656369766564) && (param_2 == -0x1800000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6449656369766564,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == (undefined1 *)0x64496b736174) && (param_2 == -0x1a00000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x64496b736174,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0x43746e656d676573;
        if (((param_1 == (undefined1 *)0x43746e656d676573) && (param_2 == -0x13ffffff8b918a91)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x43746e656d676573,0xec000000746e756f,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0x686374614d7369;
          if (((param_1 == (undefined1 *)0x686374614d7369) && (param_2 == -0x1900000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x686374614d7369,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
          {
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 4;
          }
          else {
            uVar2 = 0x6c69467974706d65;
            if (((param_1 == (undefined1 *)0x6c69467974706d65) && (param_2 == -0x12ffff9a929eb19b))
               || (uVar3 = uVar2,
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x6c69467974706d65,0xed0000656d614e65,param_1,param_2,0),
                  (uVar3 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              uVar1 = 5;
            }
            else if (((param_1 == (undefined1 *)0x6c69467974706d65) &&
                     (param_2 == -0x13ffffff938daa9b)) ||
                    (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (0x6c69467974706d65,0xec0000006c725565,param_1,param_2,0),
                    (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              uVar1 = 6;
            }
            else {
              if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff76a790)) {
                uVar2 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (&DAT_d000000000000010,0x8000000100895870,param_1,param_2,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_1 == (undefined1 *)0x7461446c61746f74) &&
                      (param_2 == -0x11ff8b918a90bc9f)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7461446c61746f74,0xee00746e756f4361,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 8;
                  }
                  uVar2 = 0;
                  if (((param_1 == (undefined1 *)0xd000000000000012) &&
                      (param_2 == -0x7ffffffeff76a770)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000012,0x8000000100895890,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 9;
                  }
                  puVar4 = &DAT_d000000000000013;
                  if (((param_1 == &DAT_d000000000000013) && (param_2 == -0x7ffffffeff76a750)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (&DAT_d000000000000013,0x80000001008958b0,param_1,param_2,0),
                     ((ulong)puVar4 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 10;
                  }
                  uVar2 = 0xd000000000000015;
                  if (((param_1 == (undefined1 *)0xd000000000000015) &&
                      (param_2 == -0x7ffffffeff76a730)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000015,0x80000001008958d0,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 0xb;
                  }
                  uVar2 = 0x7473615072657375;
                  if (((param_1 != (undefined1 *)0x7473615072657375) ||
                      (param_2 != -0x13ffffff938daa9b)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7473615072657375,0xec0000006c725565,param_1,param_2,0),
                     (uVar2 & 1) == 0)) {
                    uVar2 = 0;
                    if (((param_1 == (undefined1 *)0x726174536b736174) &&
                        (param_2 == -0x12ffff9a9296ab8c)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x726174536b736174,0xed0000656d695474,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xd;
                    }
                    uVar2 = 0x5073614872657375;
                    if (((param_1 == (undefined1 *)0x5073614872657375) &&
                        (param_2 == -0x13ffffff9a8b8c9f)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x5073614872657375,0xec00000065747361,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xe;
                    }
                    uVar2 = 0;
                    if (((param_1 != (undefined1 *)0x745373496b736174) ||
                        (param_2 != -0x14ffffffff8b8d9f)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x745373496b736174,0xeb00000000747261,param_1,param_2,0),
                       (uVar2 & 1) == 0)) {
                      uVar2 = 0;
                      if ((param_1 == (undefined1 *)0x746c75736572) &&
                         (param_2 == -0x1a00000000000000)) {
                        _swift_bridgeObjectRelease(0xe600000000000000);
                        return 0x10;
                      }
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x746c75736572,0xe600000000000000,param_1,param_2,0);
                      _swift_bridgeObjectRelease(param_2);
                      if ((uVar2 & 1) != 0) {
                        return 0x10;
                      }
                      return 0x11;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 0xf;
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 0xc;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              uVar1 = 7;
            }
          }
        }
      }
    }
  }
  return uVar1;
}

