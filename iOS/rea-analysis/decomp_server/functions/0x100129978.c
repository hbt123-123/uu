// rea decompile_all
// name: FUN_100129978
// address: 0x100129978
// body: available
// range: 0x100129978-0x100129d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100129978(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long extraout_x8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  code *pcVar20;
  undefined *puVar21;
  long lVar22;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined *local_78 [3];
  
  puVar7 = &DAT_100a79a50;
  FUN_100004bb4(&DAT_100a79a50,&DAT_10080e770);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  puVar18 = (undefined4 *)(&stack0xfffffffffffffef0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar10 = (undefined4 *)((long)puVar18 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar11 = (undefined4 *)((long)puVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  local_90 = param_1;
  _swift_bridgeObjectRetain(uVar17);
  pcVar6 = FUN_100129e88;
  FUN_100129ea4(FUN_100129e88,auStack_a0,uVar17);
  _swift_bridgeObjectRelease(uVar17);
  lVar15 = *(long *)(pcVar6 + 0x10);
  if (lVar15 == 0) {
    _swift_release(pcVar6);
    lVar15 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar21 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_78[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fbb8(0,lVar15,0);
    puVar21 = local_78[0];
    pcVar1 = pcVar6 + 0x40;
    pcVar8 = pcVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg(pcVar1,~(-1L << ((ulong)(byte)pcVar6[0x20] & 0x3f)));
    lVar12 = 0;
    iVar3 = *(int *)(pcVar6 + 0x24);
    do {
      if (((long)pcVar8 < 0) || (1L << ((ulong)(byte)pcVar6[0x20] & 0x3f) <= (long)pcVar8)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d78);
        (*pcVar6)();
      }
      uVar19 = (ulong)pcVar8 >> 6;
      uVar13 = 1L << ((ulong)pcVar8 & 0x3f);
      if ((*(ulong *)(pcVar1 + uVar19 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d7c);
        (*pcVar6)();
      }
      if (iVar3 != *(int *)(pcVar6 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d80);
        (*pcVar6)();
      }
      iVar5 = *(int *)(puVar7 + 0x30);
      lVar16 = *(long *)(pcVar6 + 0x38);
      uVar4 = *(undefined4 *)(*(long *)(pcVar6 + 0x30) + (long)pcVar8 * 4);
      lVar9 = 0;
      __s10Foundation4DateVMa();
      lVar22 = *(long *)(lVar9 + -8);
      (**(code **)(lVar22 + 0x10))
                ((long)puVar11 + (iVar5 - extraout_x12_01),
                 lVar16 + *(long *)(lVar22 + 0x48) * (long)pcVar8,lVar9);
      *puVar11 = uVar4;
      pcVar20 = *(code **)(lVar22 + 0x20);
      (*pcVar20)((long)puVar11 + (long)*(int *)(puVar7 + 0x30),
                 (long)puVar11 + (iVar5 - extraout_x12_01),lVar9);
      FUN_10012a88c(puVar11,puVar10);
      uVar4 = *puVar10;
      iVar5 = *(int *)(puVar7 + 0x30);
      *puVar18 = uVar4;
      (*pcVar20)((long)puVar18 + (long)iVar5,(long)puVar10 + (long)iVar5,lVar9);
      FUN_100040bb4(puVar18,&DAT_100a79a50,&DAT_10080e770);
      FUN_100040bb4(puVar11,&DAT_100a79a50,&DAT_10080e770);
      uVar2 = *(ulong *)(puVar21 + 0x10);
      local_78[0] = puVar21;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar2) {
        FUN_10006fbb8(1 < *(ulong *)(puVar21 + 0x18),uVar2 + 1,1);
      }
      puVar21 = local_78[0];
      *(ulong *)(local_78[0] + 0x10) = uVar2 + 1;
      *(undefined4 *)(local_78[0] + uVar2 * 4 + 0x20) = uVar4;
      pcVar20 = (code *)(1L << ((ulong)(byte)pcVar6[0x20] & 0x3f));
      if ((long)pcVar20 <= (long)pcVar8) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d84);
        (*pcVar6)();
      }
      if ((*(ulong *)(pcVar1 + uVar19 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d88);
        (*pcVar6)();
      }
      if (iVar3 != *(int *)(pcVar6 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100129d8c);
        (*pcVar6)();
      }
      uVar13 = *(ulong *)(pcVar1 + uVar19 * 8) & -2L << ((ulong)pcVar8 & 0x3f);
      if (uVar13 == 0) {
        lVar16 = uVar19 << 6;
        pcVar14 = pcVar6 + uVar19 * 8 + 0x48;
        do {
          uVar19 = uVar19 + 1;
          if ((ulong)(pcVar20 + 0x3f) >> 6 <= uVar19) {
            FUN_10003f79c(pcVar8,iVar3,0);
            goto LAB_100129afc;
          }
          uVar13 = *(ulong *)pcVar14;
          lVar16 = lVar16 + 0x40;
          pcVar14 = pcVar14 + 8;
        } while (uVar13 == 0);
        FUN_10003f79c(pcVar8,iVar3,0);
        uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        pcVar20 = (code *)(LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + lVar16);
      }
      else {
        uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        pcVar20 = (code *)(LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) |
                          (ulong)pcVar8 & 0x7fffffffffffffc0);
      }
LAB_100129afc:
      lVar12 = lVar12 + 1;
      pcVar8 = pcVar20;
    } while (lVar12 != lVar15);
    _swift_release(pcVar6);
    lVar15 = *(long *)(puVar21 + 0x10);
  }
  if (lVar15 != 0) {
    puVar18 = (undefined4 *)(puVar21 + 0x20);
    do {
      FUN_10006d93c(local_78,*puVar18);
      lVar15 = lVar15 + -1;
      puVar18 = puVar18 + 1;
    } while (lVar15 != 0);
  }
  return puVar21;
}

