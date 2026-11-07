// rea decompile_all
// name: FUN_1000e2f40
// address: 0x1000e2f40
// body: available
// range: 0x1000e2f40-0x1000e323f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000e2f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_180 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  char *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128 [11];
  undefined8 local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_138 = param_2;
  local_130 = param_3;
  FUN_1000ccfdc();
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x20);
    local_140 = "taskIDByUniqueID";
    local_148 = s_________relPath__taskID__100886f70 + 0x30;
    do {
      uVar12 = puVar10[1];
      local_d0 = *puVar10;
      uStack_b8 = puVar10[3];
      uVar13 = puVar10[2];
      uStack_98 = puVar10[7];
      local_a0 = puVar10[6];
      uStack_88 = puVar10[9];
      uStack_90 = puVar10[8];
      uStack_a8 = puVar10[5];
      local_b0 = puVar10[4];
      local_80 = *(undefined1 *)(puVar10 + 10);
      uStack_c8 = uVar12;
      uStack_c0 = uVar13;
      if (*(long *)(puVar4 + 0x10) == 0) {
        FUN_100082314(&local_d0,local_128);
      }
      else {
        FUN_100082314(&local_d0,local_128);
        _swift_bridgeObjectRetain(puVar4);
        uVar6 = uVar13;
        FUN_1001a2c70(uVar12);
        _swift_bridgeObjectRelease(puVar4);
        if ((uVar6 & 1) != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_170 = local_138;
          uStack_168 = local_130;
          local_160 = &local_d0;
          FUN_1003fb4bc(FUN_1000e3684,auStack_180,0xd0000000000000ae,
                        (ulong)local_140 | 0x8000000000000000,0xd000000000000025,
                        (ulong)local_148 | 0x8000000000000000,0x31b,0);
        }
      }
      FUN_100082314(&local_d0,local_128);
      puVar5 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar12;
      uVar7 = uVar13;
      local_128[0] = puVar4;
      FUN_1001a2c70();
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar1 = *(long *)(puVar4 + 0x10) + uVar9;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e322c);
        (*pcVar3)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar1) {
        FUN_1000693b4(lVar1,puVar5);
        uVar6 = uVar12;
        uVar9 = uVar13;
        FUN_1001a2c70();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e3240);
          (*pcVar3)();
        }
      }
      else if (((ulong)puVar5 & 1) == 0) {
        FUN_1000645b4();
      }
      puVar4 = local_128[0];
      if ((uVar7 & 1) == 0) {
        *(ulong *)(local_128[0] + (uVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(local_128[0] + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar2 = (ulong *)(*(long *)(local_128[0] + 0x30) + uVar6 * 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar8 = (undefined8 *)(*(long *)(local_128[0] + 0x38) + uVar6 * 0x58);
        puVar8[1] = uStack_c8;
        *puVar8 = local_d0;
        puVar8[3] = uStack_b8;
        puVar8[2] = uStack_c0;
        *(undefined1 *)(puVar8 + 10) = local_80;
        puVar8[7] = uStack_98;
        puVar8[6] = local_a0;
        puVar8[9] = uStack_88;
        puVar8[8] = uStack_90;
        puVar8[5] = uStack_a8;
        puVar8[4] = local_b0;
        _swift_bridgeObjectRetain(uVar13);
        FUN_1000e3614(&local_d0);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e3230);
          (*pcVar3)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      }
      else {
        FUN_1000e3648(&local_d0,*(long *)(local_128[0] + 0x38) + uVar6 * 0x58);
        FUN_1000e3614(&local_d0);
      }
      puVar10 = puVar10 + 0xb;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return puVar4;
}

