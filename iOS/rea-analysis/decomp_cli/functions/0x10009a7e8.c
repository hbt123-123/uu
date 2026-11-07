// rea decompile_all
// name: FUN_10009a7e8
// address: 0x10009a7e8
// body: available
// range: 0x10009a7e8-0x10009a9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009a7e8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar11 = *unaff_x20;
  lVar7 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar7 = param_1;
  }
  puVar4 = &DAT_100104510;
  FUN_10000eb08(&DAT_100104510,&DAT_1000d4b70);
  lVar5 = lVar11;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar11,lVar7,param_2,puVar4);
  if (*(long *)(lVar11 + 0x10) == 0) {
    _swift_release(lVar11);
LAB_10009a9ac:
    *unaff_x20 = lVar5;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *puVar12;
  lVar7 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009a9d4);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1) != 0) {
            uVar10 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((long)uVar10 < 0x40) {
              *puVar12 = -1L << (uVar10 & 0x3f);
            }
            else {
              _bzero(puVar12,uVar10 + 0x3f >> 3 & 0x1ffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          _swift_release(lVar11);
          goto LAB_10009a9ac;
        }
        uVar10 = puVar12[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar14 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar14 << 6;
    puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 0x18);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar13 = puVar9[2];
    puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 0x48);
    if ((param_2 & 1) == 0) {
      FUN_100083828(puVar9,&local_b0);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar13);
    }
    else {
      uStack_a8 = puVar9[1];
      local_b0 = *puVar9;
      uStack_98 = puVar9[3];
      local_a0 = puVar9[2];
      uStack_88 = puVar9[5];
      local_90 = puVar9[4];
      uStack_78 = puVar9[7];
      uStack_80 = puVar9[6];
      local_70 = *(undefined1 *)(puVar9 + 8);
    }
    FUN_10009b1c8(uVar1,uVar2,uVar13,&local_b0,lVar5);
    lVar7 = lVar14;
  } while( true );
}

