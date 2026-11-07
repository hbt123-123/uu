// rea decompile_all
// name: FUN_10019cd50
// address: 0x10019cd50
// body: available
// range: 0x10019cd50-0x10019d04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10019cd50(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined *local_68;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc850();
  lVar19 = 0;
  do {
    bVar4 = (&DAT_100a741c0)[lVar19];
    uVar16 = (ulong)bVar4;
    uVar5 = bVar4 - 1;
    if ((uVar5 < 0x30) && ((0xfc78d7c7feffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
      uVar12 = (ulong)uVar5 & 0xff;
      uVar17 = (&DAT_1008106b8)[uVar12];
      uVar18 = (&DAT_100810838)[uVar12];
      uVar8 = uVar18;
      FUN_10019cb78();
      uVar2 = 0;
      if (param_2 != (undefined *)0x0) {
        uVar2 = uVar8;
      }
      puVar3 = (undefined *)0xe000000000000000;
      if (param_2 != (undefined *)0x0) {
        puVar3 = param_2;
      }
      uVar8 = uVar17;
      FUN_1003e6894();
      puVar9 = puVar7;
      puVar11 = param_2;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = uVar16;
      local_68 = puVar7;
      FUN_1001a2f1c();
      uVar14 = (ulong)~(uint)puVar11 & 1;
      lVar1 = *(long *)(puVar7 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10019d038);
        (*pcVar6)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar1) {
        FUN_1000682e4(lVar1);
        FUN_1001a2f1c();
        uVar12 = uVar16;
        puVar10 = puVar9;
        if (((uint)puVar11 & 1) != ((uint)puVar9 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1009a1a98);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10019d04c);
          (*pcVar6)();
        }
      }
      else {
        puVar10 = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_100063dc0();
        }
      }
      puVar7 = local_68;
      uVar13 = *(undefined8 *)(&DAT_1008109b0 + (long)(char)bVar4 * 8);
      if (((ulong)puVar11 & 1) == 0) {
        *(ulong *)(local_68 + (uVar12 >> 6) * 8 + 0x40) =
             *(ulong *)(local_68 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
        *(byte *)(*(long *)(local_68 + 0x30) + uVar12) = bVar4;
        puVar15 = (undefined8 *)(*(long *)(local_68 + 0x38) + uVar12 * 0x58);
        *puVar15 = uVar13;
        *(undefined1 *)(puVar15 + 1) = 1;
        puVar15[2] = uVar18;
        puVar15[3] = uVar2;
        puVar15[4] = puVar3;
        puVar15[5] = 0x647261646e617473;
        puVar15[6] = 0xe800000000000000;
        puVar15[7] = uVar17;
        puVar15[8] = uVar8;
        puVar15[9] = param_2;
        *(byte *)(puVar15 + 10) = bVar4;
        if (SCARRY8(*(long *)(local_68 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10019d03c);
          (*pcVar6)();
        }
        *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + 1;
      }
      else {
        puVar15 = (undefined8 *)(*(long *)(local_68 + 0x38) + uVar12 * 0x58);
        uStack_b8 = puVar15[1];
        local_c0 = *puVar15;
        uStack_a8 = puVar15[3];
        uStack_b0 = puVar15[2];
        uStack_88 = puVar15[7];
        local_90 = puVar15[6];
        uStack_78 = puVar15[9];
        uStack_80 = puVar15[8];
        local_70 = *(undefined1 *)(puVar15 + 10);
        uStack_98 = puVar15[5];
        local_a0 = puVar15[4];
        *puVar15 = uVar13;
        *(undefined1 *)(puVar15 + 1) = 1;
        puVar15[2] = uVar18;
        puVar15[3] = uVar2;
        puVar15[4] = puVar3;
        puVar15[5] = 0x647261646e617473;
        puVar15[6] = 0xe800000000000000;
        puVar15[7] = uVar17;
        puVar15[8] = uVar8;
        puVar15[9] = param_2;
        *(byte *)(puVar15 + 10) = bVar4;
        FUN_10019e500(&local_c0);
      }
    }
    else {
      FUN_1001a2f1c();
      puVar10 = param_2;
      if (((ulong)param_2 & 1) != 0) {
        puVar10 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar7;
        if ((int)puVar10 == 0) {
          FUN_100063dc0();
        }
        puVar7 = local_68;
        puVar15 = (undefined8 *)(*(long *)(local_68 + 0x38) + uVar16 * 0x58);
        uStack_b8 = puVar15[1];
        local_c0 = *puVar15;
        uStack_a8 = puVar15[3];
        uStack_b0 = puVar15[2];
        uStack_88 = puVar15[7];
        local_90 = puVar15[6];
        uStack_78 = puVar15[9];
        uStack_80 = puVar15[8];
        local_70 = *(undefined1 *)(puVar15 + 10);
        uStack_98 = puVar15[5];
        local_a0 = puVar15[4];
        FUN_10019e500(&local_c0);
        puVar10 = puVar7;
        FUN_10006c448(uVar16);
      }
    }
    lVar19 = lVar19 + 1;
    param_2 = puVar10;
    if (lVar19 == 0x31) {
      return puVar7;
    }
  } while( true );
}

