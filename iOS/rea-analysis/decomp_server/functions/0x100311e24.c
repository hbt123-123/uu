// rea decompile_all
// name: FUN_100311e24
// address: 0x100311e24
// body: available
// range: 0x100311e24-0x100312213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100311e24(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0x382d667475;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_3;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(param_3);
  if (((param_2 == 0x382d667475) && (lVar2 == -0x1b00000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x382d667475,0xe500000000000000,param_2,lVar2,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lVar2);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar3);
  }
  else {
    uVar4 = 0x393538382d6f7369;
    if (((param_2 == 0x393538382d6f7369) && (lVar2 == -0x15ffffffffffced3)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x393538382d6f7369,0xea0000000000312d,param_2,lVar2,0), (uVar4 & 1) != 0)) {
      _swift_bridgeObjectRelease(lVar2);
      __sSS10FoundationE8EncodingV9isoLatin1ACvgZ(puVar3);
    }
    else {
      uVar4 = 0x2d65646f63696e75;
      if (((param_2 == 0x2d65646f63696e75) && (lVar2 == -0x14ffffffffced2cf)) ||
         (((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x2d65646f63696e75,0xeb00000000312d31,param_2,lVar2,0), (uVar4 & 1) != 0 ||
           ((((uVar4 = 0x343630312d6f7369, param_2 == 0x343630312d6f7369 &&
              (lVar2 == -0x10cdd28c9c8ad2ca)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x343630312d6f7369,0xef322d7363752d36,param_2,lVar2,0), (uVar4 & 1) != 0))
            || ((uVar4 = 0x36312d667475, param_2 == 0x36312d667475 && (lVar2 == -0x1a00000000000000)
                ))))) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (0x36312d667475,0xe600000000000000,param_2,lVar2,0), (uVar4 & 1) != 0)))) {
        _swift_bridgeObjectRelease(lVar2);
        __sSS10FoundationE8EncodingV5utf16ACvgZ(puVar3);
      }
      else {
        uVar4 = 0x656236312d667475;
        if (((param_2 == 0x656236312d667475) && (lVar2 == -0x1800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x656236312d667475,0xe800000000000000,param_2,lVar2,0), (uVar4 & 1) != 0)) {
          _swift_bridgeObjectRelease(lVar2);
          __sSS10FoundationE8EncodingV14utf16BigEndianACvgZ(puVar3);
        }
        else {
          uVar4 = 0x656c36312d667475;
          if (((param_2 == 0x656c36312d667475) && (lVar2 == -0x1800000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x656c36312d667475,0xe800000000000000,param_2,lVar2,0), (uVar4 & 1) != 0))
          {
            _swift_bridgeObjectRelease(lVar2);
            __sSS10FoundationE8EncodingV17utf16LittleEndianACvgZ(puVar3);
          }
          else {
            uVar4 = 0x32332d667475;
            if (((param_2 == 0x32332d667475) && (lVar2 == -0x1a00000000000000)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x32332d667475,0xe600000000000000,param_2,lVar2,0), (uVar4 & 1) != 0)) {
              _swift_bridgeObjectRelease(lVar2);
              __sSS10FoundationE8EncodingV5utf32ACvgZ(puVar3);
            }
            else {
              uVar4 = 0x656232332d667475;
              if (((param_2 == 0x656232332d667475) && (lVar2 == -0x1800000000000000)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x656232332d667475,0xe800000000000000,param_2,lVar2,0),
                 (uVar4 & 1) != 0)) {
                _swift_bridgeObjectRelease(lVar2);
                __sSS10FoundationE8EncodingV14utf32BigEndianACvgZ(puVar3);
              }
              else {
                uVar4 = 0x656c32332d667475;
                if ((param_2 == 0x656c32332d667475) && (lVar2 == -0x1800000000000000)) {
                  _swift_bridgeObjectRelease(0xe800000000000000);
                }
                else {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x656c32332d667475,0xe800000000000000,param_2,lVar2,0);
                  _swift_bridgeObjectRelease(lVar2);
                  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100312210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar5 + 0x38))(param_1,1,1,lVar1);
                    return;
                  }
                }
                __sSS10FoundationE8EncodingV17utf32LittleEndianACvgZ(puVar3);
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(lVar5 + 0x20))(param_1,puVar3,lVar1);
  (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  return;
}

