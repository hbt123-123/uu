// rea decompile_all
// name: FUN_1001831c8
// address: 0x1001831c8
// body: available
// range: 0x1001831c8-0x100183467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1001831c8(char *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  
  uVar5 = 0x646e6573;
  if (*param_1 == '\0') {
    uVar5 = 0x65766965636572;
  }
  lVar8 = -0x1c00000000000000;
  if (*param_1 == '\0') {
    lVar8 = -0x1900000000000000;
  }
  uVar6 = 0x646e6573;
  if (*param_2 == '\0') {
    uVar6 = 0x65766965636572;
  }
  lVar1 = -0x1c00000000000000;
  if (*param_2 == '\0') {
    lVar1 = -0x1900000000000000;
  }
  if (uVar5 == uVar6 && lVar8 == lVar1) {
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(lVar1);
LAB_10018326c:
    cVar4 = param_1[1];
    lVar8 = -0x11ff9a8d8a93969f;
    uVar5 = 0x466c616974726170;
    if (cVar4 != '\x01') {
      lVar8 = -0x1900000000000000;
      uVar5 = 0x6572756c696166;
    }
    uVar6 = 0x73736563637573;
    if (cVar4 != '\0') {
      uVar6 = uVar5;
    }
    lVar1 = -0x1900000000000000;
    if (cVar4 != '\0') {
      lVar1 = lVar8;
    }
    cVar4 = param_2[1];
    lVar8 = -0x11ff9a8d8a93969f;
    uVar5 = 0x466c616974726170;
    if (cVar4 != '\x01') {
      lVar8 = -0x1900000000000000;
      uVar5 = 0x6572756c696166;
    }
    uVar2 = 0x73736563637573;
    if (cVar4 != '\0') {
      uVar2 = uVar5;
    }
    lVar3 = -0x1900000000000000;
    if (cVar4 != '\0') {
      lVar3 = lVar8;
    }
    if ((uVar6 == uVar2) && (lVar1 == lVar3)) {
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(lVar3);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar6,lVar1,uVar2,lVar3,0);
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(lVar3);
      if ((uVar6 & 1) == 0) goto LAB_10018344c;
    }
    uVar5 = *(ulong *)(param_1 + 8);
    if (((uVar5 == *(ulong *)(param_2 + 8)) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) != 0)) {
      uVar5 = *(ulong *)(param_1 + 0x18);
      if ((((uVar5 == *(ulong *)(param_2 + 0x18)) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar5 & 1) != 0)) &&
         (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
        uVar5 = *(ulong *)(param_1 + 0x30);
        if (((uVar5 == *(ulong *)(param_2 + 0x30)) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar5 & 1) != 0)) {
          uVar5 = *(ulong *)(param_1 + 0x40);
          if (((((uVar5 == *(ulong *)(param_2 + 0x40)) &&
                (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar5 & 1) != 0)) &&
              ((*(long *)(param_1 + 0x50) == *(long *)(param_2 + 0x50) &&
               (*(long *)(param_1 + 0x58) == *(long *)(param_2 + 0x58))))) &&
             ((((param_1[0x60] ^ param_2[0x60]) & 1U) == 0 &&
              (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68))))) {
            bVar7 = param_1[0x70] ^ param_2[0x70] ^ 1;
            goto LAB_100183450;
          }
        }
      }
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar5,lVar8,uVar6,lVar1,0);
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(lVar1);
    if ((uVar5 & 1) != 0) goto LAB_10018326c;
  }
LAB_10018344c:
  bVar7 = 0;
LAB_100183450:
  return bVar7 & 1;
}

