// rea decompile_all
// name: FUN_100386bc8
// address: 0x100386bc8
// body: available
// range: 0x100386bc8-0x100386dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100386bc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (((*(int *)(lVar1 + 0x18) < 0) || (*(long *)(lVar1 + 0x28) == 0)) ||
     (*(long *)(lVar1 + 0x20) == 0)) {
    FUN_10038fabc(lVar1,0);
    lVar1 = *(long *)(param_1 + 0xa0);
    if (-1 < *(int *)(lVar1 + 0x18)) goto LAB_100386c0c;
  }
  else {
LAB_100386c0c:
    if ((*(long *)(lVar1 + 0x28) != 0) &&
       (puVar5 = *(undefined8 **)(lVar1 + 0x20), puVar5 != (undefined8 *)0x0)) {
      puVar7 = *(undefined8 **)(param_1 + 0xa8);
      uVar3 = puVar5[1];
      uVar2 = *puVar5;
      uVar9 = puVar5[2];
      uVar11 = puVar5[5];
      uVar10 = puVar5[4];
      puVar7[3] = puVar5[3];
      puVar7[2] = uVar9;
      puVar7[5] = uVar11;
      puVar7[4] = uVar10;
      puVar7[1] = uVar3;
      *puVar7 = uVar2;
      uVar3 = puVar5[7];
      uVar2 = puVar5[6];
      uVar10 = puVar5[9];
      uVar9 = puVar5[8];
      uVar11 = puVar5[10];
      uVar13 = puVar5[0xd];
      uVar12 = puVar5[0xc];
      puVar7[0xb] = puVar5[0xb];
      puVar7[10] = uVar11;
      puVar7[0xd] = uVar13;
      puVar7[0xc] = uVar12;
      puVar7[7] = uVar3;
      puVar7[6] = uVar2;
      puVar7[9] = uVar10;
      puVar7[8] = uVar9;
      puVar5 = *(undefined8 **)(param_1 + 0xa8);
      uVar6 = *(uint *)((long)puVar5 + 4);
      if (5 < uVar6) {
        FUN_100386734(2,"MMKV_IO.cpp","loadMetaInfoAndCheck",0xcc,
                      "meta file [%s] in specious state, version %u, flags 0x%llx");
        lVar1 = *(long *)(param_1 + 0xa0);
        puVar5 = *(undefined8 **)(param_1 + 0xa8);
        *(undefined4 *)((long)puVar5 + 4) = 3;
        puVar5[0xd] = 0;
        puVar7 = *(undefined8 **)(lVar1 + 0x20);
        uVar3 = puVar5[1];
        uVar2 = *puVar5;
        uVar9 = puVar5[2];
        uVar11 = puVar5[5];
        uVar10 = puVar5[4];
        puVar7[3] = puVar5[3];
        puVar7[2] = uVar9;
        puVar7[5] = uVar11;
        puVar7[4] = uVar10;
        puVar7[1] = uVar3;
        *puVar7 = uVar2;
        uVar3 = puVar5[7];
        uVar2 = puVar5[6];
        uVar10 = puVar5[9];
        uVar9 = puVar5[8];
        uVar11 = puVar5[10];
        uVar13 = puVar5[0xd];
        uVar12 = puVar5[0xc];
        puVar7[0xb] = puVar5[0xb];
        puVar7[10] = uVar11;
        puVar7[0xd] = uVar13;
        puVar7[0xc] = uVar12;
        puVar7[7] = uVar3;
        puVar7[6] = uVar2;
        puVar7[9] = uVar10;
        puVar7[8] = uVar9;
        puVar5 = *(undefined8 **)(param_1 + 0xa8);
        uVar6 = *(uint *)((long)puVar5 + 4);
      }
      uVar8 = puVar5[0xd];
      if (uVar6 < 4) {
        if (uVar8 == 0) {
          return;
        }
        puVar5[0xd] = 0;
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0x20);
        uVar11 = puVar5[2];
        uVar3 = puVar5[5];
        uVar2 = puVar5[4];
        uVar10 = puVar5[1];
        uVar9 = *puVar5;
        puVar7[3] = puVar5[3];
        puVar7[2] = uVar11;
        puVar7[5] = uVar3;
        puVar7[4] = uVar2;
        uVar12 = puVar5[0xb];
        uVar11 = puVar5[10];
        uVar3 = puVar5[0xd];
        uVar2 = puVar5[0xc];
        uVar15 = puVar5[6];
        uVar14 = puVar5[9];
        uVar13 = puVar5[8];
        puVar7[7] = puVar5[7];
        puVar7[6] = uVar15;
        puVar7[9] = uVar14;
        puVar7[8] = uVar13;
        puVar7[0xb] = uVar12;
        puVar7[10] = uVar11;
        puVar7[0xd] = uVar3;
        puVar7[0xc] = uVar2;
        puVar7[1] = uVar10;
        *puVar7 = uVar9;
        return;
      }
      *(byte *)(param_1 + 0xd8) = (byte)uVar8 & 1;
      if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0xe0) == '\x01')) {
        FUN_100386734(3,"MMKV_IO.cpp","loadMetaInfoAndCheck",0xd7,
                      "enableCompareBeforeSet will be invalid when Expiration is on");
        *(undefined1 *)(param_1 + 0xe0) = 0;
      }
      pcVar4 = "meta file [%s] has flag [%llu]";
      uVar2 = 1;
      uVar3 = 0xda;
      goto LAB_100386d88;
    }
  }
  pcVar4 = "file [%s] not valid";
  uVar2 = 3;
  uVar3 = 0xc4;
LAB_100386d88:
  FUN_100386734(uVar2,"MMKV_IO.cpp","loadMetaInfoAndCheck",uVar3,pcVar4);
  return;
}

