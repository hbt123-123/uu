// rea decompile_all
// name: FUN_10002250c
// address: 0x10002250c
// body: available
// range: 0x10002250c-0x100022623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10002250c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  byte bVar4;
  long lVar5;
  undefined1 local_60 [24];
  undefined1 auStack_48 [24];
  
  uVar3 = 0;
  _swift_beginAccess(unaff_x20 + 0x88,auStack_48,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x88);
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar1,param_1 & 0xffffffff,4);
    uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1) != 0) {
      do {
        if (*(int *)(*(long *)(lVar5 + 0x30) + uVar1 * 4) == (int)param_1) {
          _swift_beginAccess(unaff_x20 + 0x80,local_60,0x20,0);
          lVar5 = *(long *)(unaff_x20 + 0x80);
          if ((*(long *)(lVar5 + 0x10) == 0) || (thunk_FUN_1001a2c34(), (uVar3 & 1) == 0)) {
            uVar3 = 0;
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
            uVar3 = (ulong)*(uint *)(*(long *)(lVar5 + 0x38) + param_1 * 4);
          }
          _swift_endAccess(local_60);
          goto LAB_1000225b4;
        }
        uVar1 = uVar1 + 1 & ~uVar2;
      } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1)
               != 0);
    }
  }
  uVar3 = 0;
  bVar4 = 1;
LAB_1000225b4:
  return uVar3 | (ulong)bVar4 << 0x20;
}

