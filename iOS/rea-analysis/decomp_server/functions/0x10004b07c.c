// rea decompile_all
// name: thunk_FUN_10004b080
// address: 0x10004b07c
// body: available
// range: 0x10004b07c-0x10004b07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_10004b080(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  __sSh15minimumCapacityShyxGSi_tcfC
            (uVar5,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0);
  lVar7 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_1 + 0x40);
  uStack_68 = uVar5;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      FUN_10006dac0(auStack_6c,
                    *(undefined4 *)
                     (*(long *)(param_1 + 0x38) +
                     (lVar7 << 8 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 2)),&DAT_100a761e0,
                    &DAT_10080a978,puVar2);
    }
    bVar4 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar4) break;
    if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
      _swift_release(param_1);
      return uStack_68;
    }
    uVar8 = ((ulong *)(param_1 + 0x40))[lVar7];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10004b1a4);
  (*pcVar3)();
}

