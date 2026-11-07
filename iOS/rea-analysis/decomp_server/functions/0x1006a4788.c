// rea decompile_all
// name: FUN_1006a4788
// address: 0x1006a4788
// body: available
// range: 0x1006a4788-0x1006a49cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_1006a4788(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  int *piVar5;
  undefined **ppuVar6;
  void **ppvVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  void *local_98 [2];
  char local_81;
  undefined8 ***local_80;
  void *pvStack_78;
  void *local_70;
  
  pcVar12 = "";
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar5 = ___error();
    iVar2 = *piVar5;
    ppuVar6 = &PTR___tlv_bootstrap_100abd8d8;
    (*(code *)PTR___tlv_bootstrap_100abd8d8)();
    if (((ulong)*ppuVar6 & 1) == 0) {
      FUN_1006a77b8();
    }
    ppuVar6 = &PTR___tlv_bootstrap_100abd8c0;
    (*(code *)PTR___tlv_bootstrap_100abd8c0)();
    if (*(char *)((long)ppuVar6 + 0x17) < '\0') {
      if (ppuVar6[1] != (undefined *)0x0) {
        **ppuVar6 = 0;
        ppuVar6[1] = (undefined *)0x0;
      }
    }
    else if (*(char *)((long)ppuVar6 + 0x17) != '\0') {
      *(undefined1 *)ppuVar6 = 0;
      *(undefined1 *)((long)ppuVar6 + 0x17) = 0;
    }
    std::string::append((char *)ppuVar6);
    std::to_string(param_2);
    ppvVar7 = local_98;
    std::string::append((char *)ppvVar7);
    local_70 = ppvVar7[2];
    pvStack_78 = ppvVar7[1];
    local_80 = *ppvVar7;
    ppvVar7[1] = (void *)0x0;
    ppvVar7[2] = (void *)0x0;
    *ppvVar7 = (void *)0x0;
    ppppuVar4 = (undefined8 ****)local_80;
    if (-1 < (long)local_70) {
      ppppuVar4 = &local_80;
    }
    std::string::append((char *)ppuVar6,(ulong)ppppuVar4);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    puVar8 = operator_new__(0xc2);
    iVar11 = (int)param_2;
    if (0 < iVar11) {
      uVar13 = 0;
      while (((puVar9 = (undefined *)(long)*(char *)((long)ppuVar6 + 0x17), -1 < (long)puVar9 ||
              (puVar9 = ppuVar6[1], puVar9 < (undefined *)0x1000)) &&
             (uVar3 = iVar11 - uVar13, 0 < (int)uVar3))) {
        if (0x1f < uVar3) {
          uVar3 = 0x20;
        }
        iVar10 = uVar3 * 6 + 7;
        while (iVar10 = iVar10 + -6, 0x1000 - (int)puVar9 <= iVar10) {
          bVar1 = (int)uVar3 < 2;
          uVar3 = uVar3 - 1;
          if (bVar1) goto LAB_1006a4980;
        }
        *(undefined2 *)(puVar8 + 0x18) = 0;
        puVar8[0x15] = 0;
        puVar8[0x14] = 0;
        puVar8[0x17] = 0;
        puVar8[0x16] = 0;
        puVar8[0x11] = 0;
        puVar8[0x10] = 0;
        puVar8[0x13] = 0;
        puVar8[0x12] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        FUN_1006a3a1c(param_1 + (ulong)uVar13,uVar3,puVar8);
        std::string::append((char *)ppuVar6);
        uVar13 = uVar13 + uVar3;
        std::string::append((char *)ppuVar6);
        if (iVar11 <= (int)uVar13) break;
      }
    }
LAB_1006a4980:
    operator_delete__(puVar8);
    pcVar12 = *ppuVar6;
    if (-1 < *(char *)((long)ppuVar6 + 0x17)) {
      pcVar12 = (char *)ppuVar6;
    }
    piVar5 = ___error();
    *piVar5 = iVar2;
  }
  return (undefined **)pcVar12;
}

