// rea decompile_all
// name: FUN_10016f208
// address: 0x10016f208
// body: available
// range: 0x10016f208-0x10016f3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10016f208(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined4 *local_80;
  ulong local_70 [3];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [28];
  undefined4 local_34;
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_50,0,0);
  local_70[0] = 0;
  _swift_stdlib_random(local_70,8);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar3 = local_70[0];
  if (*(long *)(lVar4 + 0x10) != 0) {
    while( true ) {
      uVar3 = local_70[0];
      uVar1 = *(ulong *)(lVar4 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar1,local_70[0] & 0xffffffff,4);
      uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1) == 0)
      break;
      while (*(int *)(*(long *)(lVar4 + 0x30) + uVar1 * 4) != (int)uVar3) {
        uVar1 = uVar1 + 1 & ~uVar2;
        if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1) == 0
           ) goto LAB_10016f2e4;
      }
      local_70[0] = 0;
      _swift_stdlib_random(local_70,8);
      lVar4 = *(long *)(unaff_x20 + 0x18);
      uVar3 = local_70[0];
      if (*(long *)(lVar4 + 0x10) == 0) break;
    }
  }
LAB_10016f2e4:
  local_34 = (undefined4)uVar3;
  _swift_beginAccess(unaff_x20 + 0x18,local_70,0x21,0);
  FUN_10006d93c(auStack_54,uVar3);
  _swift_endAccess(local_70);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = &local_34;
  FUN_1003fb45c(FUN_1001446a8,auStack_90,0xd0000000000000a9,0x8000000100893700,0xd000000000000017,
                0x80000001008909d0,0x58,7);
  return local_34;
}

