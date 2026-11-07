// rea decompile_all
// name: thunk_FUN_1000baeb4
// address: 0x1000b9f1c
// body: available
// range: 0x1000b9f1c-0x1000b9f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_1000baeb4(char *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  cVar1 = *param_1;
  uVar3 = 0x6e6f6974706f;
  if (cVar1 != '\x01') {
    uVar3 = 0x67616c66;
  }
  lVar6 = -0x1a00000000000000;
  if (cVar1 != '\x01') {
    lVar6 = -0x1c00000000000000;
  }
  lVar7 = -0x15ffffffffff939f;
  uVar2 = 0x6e6f697469736f70;
  if (cVar1 != '\0') {
    lVar7 = lVar6;
    uVar2 = uVar3;
  }
  cVar1 = *param_2;
  uVar3 = 0x6e6f6974706f;
  if (cVar1 != '\x01') {
    uVar3 = 0x67616c66;
  }
  lVar6 = -0x1a00000000000000;
  if (cVar1 != '\x01') {
    lVar6 = -0x1c00000000000000;
  }
  lVar8 = -0x15ffffffffff939f;
  uVar5 = 0x6e6f697469736f70;
  if (cVar1 != '\0') {
    lVar8 = lVar6;
    uVar5 = uVar3;
  }
  if ((uVar2 == uVar5) && (lVar7 == lVar8)) {
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar8);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,lVar7,uVar5,lVar8,0);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[1] ^ param_2[1]) & 1U) == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    if (*(long *)(param_1 + 0x10) == 0) {
      if (lVar6 != 0) {
        return 0;
      }
    }
    else {
      if (lVar6 == 0) {
        return 0;
      }
      uVar3 = *(ulong *)(param_1 + 8);
      if (((uVar3 != *(ulong *)(param_2 + 8)) || (*(long *)(param_1 + 0x10) != lVar6)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if ((((param_1[0x18] ^ param_2[0x18]) & 1U) == 0) &&
       (((param_1[0x19] ^ param_2[0x19]) & 1U) == 0)) {
      uVar3 = (ulong)(byte)param_1[0x1a];
      FUN_1000b6bfc(uVar3,param_2[0x1a]);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 0x20);
        lVar6 = *(long *)(param_2 + 0x20);
        if (uVar3 == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          _swift_bridgeObjectRetain(lVar6);
          FUN_1000b86d0(uVar3,lVar6);
          _swift_bridgeObjectRelease(lVar6);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
        lVar7 = *(long *)(param_1 + 0x38);
        lVar6 = *(long *)(param_2 + 0x38);
        if (lVar7 == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x30);
          uVar2 = *(ulong *)(param_2 + 0x30);
          uVar5 = 0x676e6f6c;
          if ((*(ulong *)(param_1 + 0x28) & 0xff) == 0) {
            lVar8 = -0x1c00000000000000;
            uVar4 = 0x676e6f6c;
          }
          else if (((uint)*(ulong *)(param_1 + 0x28) & 0xff) == 1) {
            lVar8 = -0x1b00000000000000;
            uVar4 = 0x74726f6873;
          }
          else {
            uVar4 = 0xd000000000000012;
            lVar8 = -0x7ffffffefff36370;
          }
          if ((*(ulong *)(param_2 + 0x28) & 0xff) == 0) {
            lVar9 = -0x1c00000000000000;
          }
          else if (((uint)*(ulong *)(param_2 + 0x28) & 0xff) == 1) {
            lVar9 = -0x1b00000000000000;
            uVar5 = 0x74726f6873;
          }
          else {
            uVar5 = 0xd000000000000012;
            lVar9 = -0x7ffffffefff36370;
          }
          if ((uVar4 == uVar5) && (lVar8 == lVar9)) {
            _swift_bridgeObjectRetain(lVar6);
            _swift_bridgeObjectRelease(lVar8);
            _swift_bridgeObjectRelease(lVar9);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar4,lVar8,uVar5,lVar9,0);
            _swift_bridgeObjectRetain(lVar6);
            _swift_bridgeObjectRelease(lVar8);
            _swift_bridgeObjectRelease(lVar9);
            if ((uVar4 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar6);
              return 0;
            }
          }
          if ((uVar3 == uVar2) && (lVar7 == lVar6)) {
            _swift_bridgeObjectRelease(lVar6);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar3,lVar7,uVar2,lVar6,0);
            _swift_bridgeObjectRelease(lVar6);
            if ((uVar3 & 1) == 0) {
              return 0;
            }
          }
        }
        lVar6 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_1 + 0x48) == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x40);
          if (((uVar3 != *(ulong *)(param_2 + 0x40)) || (*(long *)(param_1 + 0x48) != lVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        lVar6 = *(long *)(param_2 + 0x58);
        if (*(long *)(param_1 + 0x58) == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x50);
          if (((uVar3 != *(ulong *)(param_2 + 0x50)) || (*(long *)(param_1 + 0x58) != lVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        uVar3 = *(ulong *)(param_1 + 0x60);
        if (uVar3 == 0) {
          if (*(long *)(param_2 + 0x60) != 0) {
            return 0;
          }
        }
        else {
          if (*(long *)(param_2 + 0x60) == 0) {
            return 0;
          }
          FUN_100080b0c();
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
        uVar3 = *(ulong *)(param_1 + 0x68);
        lVar6 = *(long *)(param_2 + 0x68);
        if (uVar3 == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          _swift_bridgeObjectRetain(lVar6);
          FUN_1000ba948(uVar3,lVar6);
          _swift_bridgeObjectRelease(lVar6);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
        if (param_1[0x80] == -1) {
          if (param_2[0x80] != -1) {
            return 0;
          }
        }
        else {
          if (param_2[0x80] == -1) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x70);
          FUN_1000bada0(uVar3,*(undefined8 *)(param_1 + 0x78),param_1[0x80],
                        *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
        lVar6 = *(long *)(param_2 + 0x90);
        if (*(long *)(param_1 + 0x90) == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x88);
          if (((uVar3 != *(ulong *)(param_2 + 0x88)) || (*(long *)(param_1 + 0x90) != lVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        lVar6 = *(long *)(param_2 + 0xa0);
        if (*(long *)(param_1 + 0xa0) == 0) {
          if (lVar6 == 0) {
            return 1;
          }
        }
        else if ((lVar6 != 0) &&
                (((uVar3 = *(ulong *)(param_1 + 0x98), uVar3 == *(ulong *)(param_2 + 0x98) &&
                  (*(long *)(param_1 + 0xa0) == lVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

