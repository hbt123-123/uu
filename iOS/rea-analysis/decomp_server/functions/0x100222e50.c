// rea decompile_all
// name: FUN_100222e50
// address: 0x100222e50
// body: available
// range: 0x100222e50-0x100223063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100222e50(undefined *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_d0 [16];
  undefined **local_c0;
  char *local_b0;
  char *pcStack_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_88 = param_1;
  uStack_80 = param_2;
  FUN_1002309fc(0,8,0);
  lVar16 = 0;
  pcVar12 = "FLERKEN_page_view";
  pcVar13 = "FLERKEN_increase_user_profile";
  pcVar14 = "getFileDateStr(filePath:)";
  pcVar10 = "FLERKEN_set_once_user_profile";
  pcVar11 = "FLERKEN_append_user_profile";
  puVar15 = local_70;
  do {
    bVar6 = (&DAT_100a7de60)[lVar16];
    pcVar4 = pcVar13;
    puVar7 = (undefined1 *)0xd00000000000001b;
    if (bVar6 != 6) {
      pcVar4 = pcVar14;
      puVar7 = (undefined1 *)0xd00000000000001d;
    }
    pcVar3 = pcVar10;
    puVar1 = &DAT_d000000000000018;
    if (bVar6 != 4) {
      pcVar3 = pcVar11;
      puVar1 = (undefined1 *)0xd00000000000001d;
    }
    if (bVar6 < 6) {
      pcVar4 = pcVar3;
      puVar7 = puVar1;
    }
    puVar1 = &DAT_d000000000000013;
    pcVar3 = "FLERKEN_apple_asa";
    if (bVar6 != 2) {
      puVar1 = (undefined1 *)0xd000000000000011;
      pcVar3 = "FLERKEN_set_user_profile";
    }
    pcVar2 = "FLERKEN_change_user";
    puVar8 = (undefined1 *)0xd000000000000011;
    if (bVar6 == 0) {
      pcVar2 = pcVar12;
      puVar8 = (undefined1 *)0xd000000000000012;
    }
    if (bVar6 < 2) {
      pcVar3 = pcVar2;
      puVar1 = puVar8;
    }
    if (bVar6 < 4) {
      pcVar4 = pcVar3;
      puVar7 = puVar1;
    }
    uVar5 = *(ulong *)(puVar15 + 0x10);
    if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
      local_b0 = pcVar11;
      pcStack_a8 = pcVar10;
      local_a0 = pcVar14;
      local_98 = pcVar13;
      local_90 = pcVar12;
      local_70 = puVar15;
      FUN_1002309fc(1 < *(ulong *)(puVar15 + 0x18),uVar5 + 1,1);
      pcVar10 = pcStack_a8;
      pcVar11 = local_b0;
      pcVar12 = local_90;
      pcVar13 = local_98;
      pcVar14 = local_a0;
      puVar15 = local_70;
    }
    lVar16 = lVar16 + 1;
    *(ulong *)(puVar15 + 0x10) = uVar5 + 1;
    *(undefined1 **)(puVar15 + uVar5 * 0x10 + 0x20) = puVar7;
    *(ulong *)(puVar15 + uVar5 * 0x10 + 0x28) = (ulong)pcVar4 | 0x8000000000000000;
  } while (lVar16 != 8);
  local_70 = local_88;
  uStack_68 = uStack_80;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c0 = &local_70;
  uVar9 = 0;
  FUN_100152a38(FUN_10009ff84,auStack_d0,puVar15);
  _swift_release(puVar15);
  return uVar9 & 1;
}

