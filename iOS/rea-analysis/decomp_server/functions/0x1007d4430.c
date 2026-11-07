// rea decompile_all
// name: FUN_1007d4430
// address: 0x1007d4430
// body: available
// range: 0x1007d4430-0x1007d45f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d4430(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 local_68;
  
  lVar8 = 0;
  puVar10 = (ulong *)(param_3 + 0x40);
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar5 < 0x40) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *puVar10;
  uVar5 = uVar5 + 0x3f >> 6;
  lVar11 = 0;
  do {
    if (uVar7 == 0) {
      lVar12 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d45ec);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar12) {
LAB_1007d45b0:
        FUN_1007d45f4(param_1,param_2,lVar8,param_3);
        return;
      }
      uVar7 = puVar10[lVar12];
      if (uVar7 == 0) {
        lVar12 = lVar11 + 2;
        if ((long)uVar5 <= lVar12) goto LAB_1007d45b0;
        uVar7 = puVar10[lVar12];
        if (uVar7 == 0) {
          lVar12 = lVar11 + 3;
          if ((long)uVar5 <= lVar12) goto LAB_1007d45b0;
          uVar7 = puVar10[lVar12];
          while (uVar7 == 0) {
            bVar3 = SCARRY8(lVar12,1);
            lVar12 = lVar12 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d45f0);
              (*pcVar2)();
            }
            if ((long)uVar5 <= lVar12) goto LAB_1007d45b0;
            uVar7 = puVar10[lVar12];
          }
        }
      }
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar12 * 0x40;
    }
    else {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar11 << 6;
      lVar12 = lVar11;
    }
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    local_70 = *puVar4;
    uVar1 = puVar4[1];
    local_68 = uVar1;
    FUN_10003e8bc(*(long *)(param_3 + 0x38) + uVar9 * 0x20,auStack_90);
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &local_70;
    FUN_1007d35ac(puVar4,auStack_90);
    FUN_10003f094(auStack_90);
    _swift_bridgeObjectRelease(local_68);
    if (unaff_x21 != 0) {
      return;
    }
    lVar11 = lVar12;
    if (((ulong)puVar4 & 1) != 0) {
      uVar6 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar9 & 0x3f);
      bVar3 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d45f4);
        (*pcVar2)();
      }
    }
  } while( true );
}

