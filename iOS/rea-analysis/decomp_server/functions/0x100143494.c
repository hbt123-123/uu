// rea decompile_all
// name: FUN_100143494
// address: 0x100143494
// body: available
// range: 0x100143494-0x100143647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100143494(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined4 *local_90;
  ulong local_80 [3];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [28];
  undefined4 local_44;
  
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::clipboardIndexSet;
  _swift_beginAccess(unaff_x20 +
                     _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::clipboardIndexSet,
                     auStack_60,0,0);
  local_80[0] = 0;
  _swift_stdlib_random(local_80,8);
  lVar5 = *(long *)(unaff_x20 + lVar1);
  uVar4 = local_80[0];
  if (*(long *)(lVar5 + 0x10) != 0) {
    while( true ) {
      uVar4 = local_80[0];
      uVar2 = *(ulong *)(lVar5 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar2,local_80[0] & 0xffffffff,4);
      uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar5 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) == 0)
      break;
      while (*(int *)(*(long *)(lVar5 + 0x30) + uVar2 * 4) != (int)uVar4) {
        uVar2 = uVar2 + 1 & ~uVar3;
        if ((*(ulong *)(lVar5 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) == 0
           ) goto LAB_10014357c;
      }
      local_80[0] = 0;
      _swift_stdlib_random(local_80,8);
      lVar5 = *(long *)(unaff_x20 + lVar1);
      uVar4 = local_80[0];
      if (*(long *)(lVar5 + 0x10) == 0) break;
    }
  }
LAB_10014357c:
  local_44 = (undefined4)uVar4;
  _swift_beginAccess(unaff_x20 + lVar1,local_80,0x21,0);
  FUN_10006d93c(auStack_64,uVar4);
  _swift_endAccess(local_80);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_90 = &local_44;
  FUN_1003fb45c(FUN_1001446a8,auStack_a0,0xd0000000000000ad,0x8000000100890750,0xd000000000000017,
                0x80000001008909d0,0x263,7);
  return local_44;
}

