// rea decompile_all
// name: FUN_1000974f8
// address: 0x1000974f8
// body: available
// range: 0x1000974f8-0x1000976ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000974f8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong local_b8;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_1000976d8:
    uVar6 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      lVar12 = 0;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      local_b8 = 0xffffffffffffffff;
      if ((long)uVar10 < 0x40) {
        local_b8 = ~(-1L << (uVar10 & 0x3f));
      }
      local_b8 = local_b8 & *(ulong *)(param_1 + 0x38);
      if (local_b8 == 0) goto LAB_100097594;
LAB_100097578:
      uVar7 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      local_b8 = local_b8 - 1 & local_b8;
LAB_1000975c4:
      plVar8 = (long *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar7) | lVar12 << 6) * 0x18);
      lVar2 = *plVar8;
      uVar7 = plVar8[1];
      bVar3 = *(byte *)(plVar8 + 2);
      bVar4 = *(byte *)((long)plVar8 + 0x11);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      if ((bVar4 & 1) == 0) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(lVar2);
        if ((bVar3 & 1) != 0) goto LAB_10009760c;
        __ss6HasherV8_combineyySuF(1);
        uVar9 = uVar7;
      }
      else {
LAB_10009760c:
        uVar9 = 0;
      }
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar9 = uVar9 & (uVar11 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 3 & 0xffffffffffffff8)) >> (uVar9 & 0x3f) & 1) != 0
         ) {
        do {
          plVar8 = (long *)(*(long *)(param_2 + 0x30) + uVar9 * 0x18);
          bVar1 = bVar4;
          if ((*(byte *)((long)plVar8 + 0x11) & 1) == 0) {
            if (*plVar8 != lVar2) {
              bVar1 = 1;
            }
            if ((bVar1 & 1) == 0) {
              bVar1 = bVar3;
              if ((*(byte *)(plVar8 + 2) & 1) != 0) goto joined_r0x000100097664;
              if (((bVar3 & 1) == 0) && (plVar8[1] == uVar7)) goto LAB_1000976c4;
            }
          }
          else {
joined_r0x000100097664:
            if ((bVar1 & 1) != 0) goto LAB_1000976c4;
          }
          uVar9 = uVar9 + 1 & ~uVar11;
          if ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 3 & 0xffffffffffffff8)) >> (uVar9 & 0x3f) & 1)
              == 0) break;
        } while( true );
      }
    }
    uVar6 = 0;
  }
  return uVar6;
LAB_1000976c4:
  if (local_b8 != 0) goto LAB_100097578;
LAB_100097594:
  do {
    lVar2 = lVar12 + 1;
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100097700);
      (*pcVar5)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_1000976d8;
    local_b8 = ((ulong *)(param_1 + 0x38))[lVar2];
    lVar12 = lVar12 + 1;
  } while (local_b8 == 0);
  uVar7 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
  local_b8 = local_b8 - 1 & local_b8;
  lVar12 = lVar2;
  goto LAB_1000975c4;
}

