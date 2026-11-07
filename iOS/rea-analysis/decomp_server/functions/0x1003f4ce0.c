// rea decompile_all
// name: FUN_1003f4ce0
// address: 0x1003f4ce0
// body: available
// range: 0x1003f4ce0-0x1003f4f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003f4ce0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
  if ((uVar2 == *(ulong *)(param_1 + 0x10) && lVar1 == *(long *)(param_1 + 0x18)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,lVar1,*(ulong *)(param_1 + 0x10),*(long *)(param_1 + 0x18),0),
     (uVar2 & 1) != 0)) {
    _swift_beginAccess(unaff_x20 + 0x20,auStack_88,0,0);
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    lVar1 = *(long *)(unaff_x20 + 0x28);
    _swift_beginAccess(param_1 + 0x20,auStack_a0,0,0);
    if (((uVar2 == *(ulong *)(param_1 + 0x20)) && (lVar1 == *(long *)(param_1 + 0x28))) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar2,lVar1,*(ulong *)(param_1 + 0x20),*(long *)(param_1 + 0x28),0),
       (uVar2 & 1) != 0)) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_b8,0,0);
      uVar2 = *(ulong *)(unaff_x20 + 0x30);
      lVar1 = *(long *)(unaff_x20 + 0x38);
      _swift_beginAccess(param_1 + 0x30,auStack_d0,0,0);
      if (((uVar2 == *(ulong *)(param_1 + 0x30)) && (lVar1 == *(long *)(param_1 + 0x38))) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar2,lVar1,*(ulong *)(param_1 + 0x30),*(long *)(param_1 + 0x38),0),
         (uVar2 & 1) != 0)) {
        _swift_beginAccess(unaff_x20 + 0x40,auStack_e8,0,0);
        uVar2 = *(ulong *)(unaff_x20 + 0x40);
        lVar1 = *(long *)(unaff_x20 + 0x48);
        _swift_beginAccess(param_1 + 0x40,auStack_100,0,0);
        if (((uVar2 == *(ulong *)(param_1 + 0x40)) && (lVar1 == *(long *)(param_1 + 0x48))) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar2,lVar1,*(ulong *)(param_1 + 0x40),*(long *)(param_1 + 0x48),0),
           (uVar2 & 1) != 0)) {
          _swift_beginAccess(unaff_x20 + 0x50,auStack_118,0,0);
          uVar2 = *(ulong *)(unaff_x20 + 0x50);
          lVar1 = *(long *)(unaff_x20 + 0x58);
          _swift_beginAccess(param_1 + 0x50,auStack_130,0,0);
          if (((uVar2 == *(ulong *)(param_1 + 0x50)) && (lVar1 == *(long *)(param_1 + 0x58))) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar2,lVar1,*(ulong *)(param_1 + 0x50),*(long *)(param_1 + 0x58),0),
             (uVar2 & 1) != 0)) {
            _swift_beginAccess(unaff_x20 + 0x60,auStack_148,0,0);
            uVar2 = *(ulong *)(unaff_x20 + 0x60);
            lVar1 = *(long *)(unaff_x20 + 0x68);
            _swift_beginAccess(param_1 + 0x60,auStack_160,0,0);
            if (((uVar2 == *(ulong *)(param_1 + 0x60)) && (lVar1 == *(long *)(param_1 + 0x68))) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar2,lVar1,*(ulong *)(param_1 + 0x60),*(long *)(param_1 + 0x68),0),
               (uVar2 & 1) != 0)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

