// rea decompile_all
// name: FUN_10003c088
// address: 0x10003c088
// body: available
// range: 0x10003c088-0x10003c1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c088(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  long local_58;
  
  local_58 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x38);
  lVar6 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10003c1f8);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar9) {
          _swift_retain(param_3);
          FUN_1000393c0(param_1,param_2,local_58,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x38))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar9 << 6) * 4);
    puVar4 = auStack_78;
    _swift_beginAccess(param_4 + 0x80,puVar4,0x20,0);
    lVar6 = lVar9;
    if ((*(long *)(*(long *)(param_4 + 0x80) + 0x10) == 0) ||
       (thunk_FUN_1001a2c34(uVar1), ((ulong)puVar4 & 1) == 0)) {
      _swift_endAccess(auStack_78);
    }
    else {
      _swift_endAccess(auStack_78);
      uVar7 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(local_58,1);
      local_58 = local_58 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10003c1b4);
        (*pcVar2)();
      }
    }
  } while( true );
}

