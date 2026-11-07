// rea decompile_all
// name: FUN_1000eca48
// address: 0x1000eca48
// body: available
// range: 0x1000eca48-0x1000ecbff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000eca48(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)) &&
     ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)))) {
    uVar3 = param_1[4];
    if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) != 0)) {
      uVar3 = param_1[6];
      FUN_1000e3edc(uVar3,param_2[6]);
      if ((uVar3 & 1) != 0) {
        lVar4 = 0;
        FUN_1000eb43c();
        uVar3 = (long)param_1 + (long)*(int *)(lVar4 + 0x20);
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar3,(long)param_2 + (long)*(int *)(lVar4 + 0x20));
        if ((uVar3 & 1) != 0) {
          uVar3 = (long)param_1 + (long)*(int *)(lVar4 + 0x24);
          __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar3,(long)param_2 + (long)*(int *)(lVar4 + 0x24));
          if ((uVar3 & 1) != 0) {
            lVar5 = 0x657669746361;
            cVar1 = *(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
            cVar2 = *(char *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
            if (cVar1 == '\0') {
              lVar6 = -0x1a00000000000000;
              lVar4 = lVar5;
            }
            else if (cVar1 == '\x01') {
              lVar6 = -0x1a00000000000000;
              lVar4 = 0x646573756170;
            }
            else {
              lVar6 = -0x16ffffffffffff9c;
              lVar4 = 0x6574656c706d6f63;
            }
            if (cVar2 == '\0') {
              lVar7 = -0x1a00000000000000;
            }
            else if (cVar2 == '\x01') {
              lVar7 = -0x1a00000000000000;
              lVar5 = 0x646573756170;
            }
            else {
              lVar5 = 0x6574656c706d6f63;
              lVar7 = -0x16ffffffffffff9c;
            }
            if ((lVar4 == lVar5) && (lVar6 == lVar7)) {
              uVar8 = 1;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (lVar4,lVar6,lVar5,lVar7,0);
              uVar8 = (uint)lVar4;
            }
            _swift_bridgeObjectRelease(lVar6);
            _swift_bridgeObjectRelease(lVar7);
            goto LAB_1000ecb48;
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_1000ecb48:
  return uVar8 & 1;
}

