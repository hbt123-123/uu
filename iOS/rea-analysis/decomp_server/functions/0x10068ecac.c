// rea decompile_all
// name: FUN_10068ecac
// address: 0x10068ecac
// body: available
// range: 0x10068ecac-0x10068f0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010068ef5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10068ecac(ulong *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_170;
  ulong uStack_168;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  undefined *local_f0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  uVar12 = *(ulong *)(param_2 + 0x10);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease(param_2);
    local_108 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    uVar14 = 0;
    lVar15 = param_2 + 0x20;
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10068f09c);
        (*pcVar6)();
      }
      FUN_10007f314(lVar15,&local_a0,&DAT_100ab9e78,&DAT_10084d518);
      FUN_10007f314(&local_a0,&local_d8,&DAT_100ab9e78,&DAT_10084d518);
      uVar17 = uStack_d0;
      uVar16 = local_d8;
      FUN_10007f314(&local_a0,&local_108,&DAT_100ab9e78,&DAT_10084d518);
      _swift_bridgeObjectRelease(local_100);
      FUN_10007f3d4(auStack_f8,auStack_128);
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar16;
      uVar11 = uVar17;
      FUN_1001a2c70();
      uVar13 = (ulong)~(uint)uVar11 & 1;
      lVar1 = *(long *)(puVar9 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar9 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10068f0a0);
        (*pcVar6)();
      }
      if (*(long *)(puVar9 + 0x18) < lVar1) {
        FUN_10068d2e4(lVar1,puVar7);
        uVar8 = uVar16;
        uVar13 = uVar17;
        FUN_1001a2c70();
        if (((uint)uVar11 & 1) != ((uint)uVar13 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10068f0b4);
          (*pcVar6)();
        }
LAB_10068ee3c:
        if ((uVar11 & 1) == 0) goto LAB_10068ee40;
LAB_10068ed04:
        _swift_bridgeObjectRelease(uVar17);
        lVar1 = *(long *)(puVar9 + 0x38) + uVar8 * 0x20;
        FUN_10003f094(lVar1);
        FUN_10007f3d4(auStack_128,lVar1);
        FUN_100040bb4(&local_a0,&DAT_100ab9e78,&DAT_10084d518);
      }
      else {
        if (((ulong)puVar7 & 1) != 0) goto LAB_10068ee3c;
        FUN_10068cf94();
        if ((uVar11 & 1) != 0) goto LAB_10068ed04;
LAB_10068ee40:
        *(ulong *)(puVar9 + (uVar8 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar9 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar16;
        puVar2[1] = uVar17;
        FUN_10007f3d4(auStack_128,*(long *)(puVar9 + 0x38) + uVar8 * 0x20);
        FUN_100040bb4(&local_a0,&DAT_100ab9e78,&DAT_10084d518);
        if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10068f0a4);
          (*pcVar6)();
        }
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      }
      uVar14 = uVar14 + 1;
      FUN_10003f094(&local_c8);
      lVar15 = lVar15 + 0x30;
    } while (uVar12 != uVar14);
    _swift_bridgeObjectRelease(param_2);
    local_108 = puVar9;
  }
  puVar9 = &DAT_100ab9ea0;
  FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
  local_f0 = puVar9;
  FUN_10003e8bc(&local_108,auStack_128);
  puVar10 = &local_138;
  _swift_dynamicCast(puVar10,auStack_128,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  if (((ulong)puVar10 & 1) == 0) {
    FUN_10003e8bc(&local_108,&local_d8);
    FUN_10068e2dc(&local_a0,&local_d8);
    FUN_10003f094(&local_108);
    uStack_168 = uStack_80;
    local_170 = local_88;
    uVar12 = local_78;
    uVar14 = local_90;
    uVar16 = local_a0;
    uVar17 = uStack_98;
    uVar3 = local_6e;
    uVar4 = local_6f;
    uVar5 = local_70;
  }
  else {
    FUN_100008184(local_138,uStack_130);
    FUN_10068e3b8(&local_d8,local_138,uStack_130,0);
    FUN_100006cdc(local_138,uStack_130);
    FUN_10003f094(&local_108);
    FUN_100006cdc(local_138,uStack_130);
    uStack_168 = uStack_b8;
    local_170 = local_c0;
    uVar12 = local_b0;
    uVar14 = local_c8;
    uVar16 = local_d8;
    uVar17 = uStack_d0;
    uVar3 = local_a6;
    uVar4 = local_a7;
    uVar5 = local_a8;
  }
  FUN_10003f094(auStack_128);
  param_1[1] = uVar17;
  *param_1 = uVar16;
  param_1[2] = uVar14;
  param_1[4] = uStack_168;
  param_1[3] = local_170;
  param_1[5] = uVar12;
  *(undefined1 *)(param_1 + 6) = uVar5;
  *(undefined1 *)((long)param_1 + 0x31) = uVar4;
  *(undefined1 *)((long)param_1 + 0x32) = uVar3;
  return;
}

