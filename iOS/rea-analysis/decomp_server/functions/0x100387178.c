// rea decompile_all
// name: FUN_100387178
// address: 0x100387178
// body: available
// range: 0x100387178-0x10038731b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100387178(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(undefined8 *)(param_1 + 0x88) = param_2;
  uVar2 = (undefined4)param_2;
  **(undefined4 **)(*(long *)(param_1 + 0x80) + 0x20) = uVar2;
  lVar3 = *(long *)(param_1 + 0xa0);
  if (((*(int *)(lVar3 + 0x18) < 0) || (*(long *)(lVar3 + 0x28) == 0)) ||
     (*(long *)(lVar3 + 0x20) == 0)) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x88) = param_2;
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined4 *)((long)puVar4 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  *(undefined4 *)puVar4 = param_3;
  uVar7 = *(uint *)((long)puVar4 + 4);
  bVar1 = uVar7 == 0;
  if (uVar7 == 0) {
    uVar7 = 1;
    *(undefined4 *)((long)puVar4 + 4) = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
joined_r0x0001003872a0:
    if ((param_5 & 1) == 0) {
      if (3 < uVar7) {
        if (!bVar1) {
          puVar6 = *(undefined4 **)(*(long *)(param_1 + 0xa0) + 0x20);
          *puVar6 = *(undefined4 *)puVar4;
          puVar6[7] = *(undefined4 *)((long)puVar4 + 0x1c);
          return 1;
        }
        goto LAB_100387200;
      }
    }
    else {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      *(undefined4 *)(puVar4 + 4) = uVar2;
      *(undefined4 *)((long)puVar4 + 0x24) = param_3;
      if (uVar7 < 3) {
LAB_1003872bc:
        *(undefined4 *)((long)puVar4 + 4) = 3;
      }
      FUN_100386734(1,"MMKV_IO.cpp","writeActualSize",0x20b,
                    "[%s] increase sequence to %u, crc %u, actualSize %u");
      puVar4 = *(undefined8 **)(param_1 + 0xa8);
      if (3 < *(uint *)((long)puVar4 + 4)) goto LAB_100387200;
    }
  }
  else {
    uVar8 = *param_4;
    *(undefined8 *)((long)puVar4 + 0x14) = param_4[1];
    *(undefined8 *)((long)puVar4 + 0xc) = uVar8;
    puVar4 = *(undefined8 **)(param_1 + 0xa8);
    uVar7 = *(uint *)((long)puVar4 + 4);
    if (1 < uVar7) {
      bVar1 = true;
      goto joined_r0x0001003872a0;
    }
    *(undefined4 *)((long)puVar4 + 4) = 2;
    if (param_5 != 0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      *(undefined4 *)(puVar4 + 4) = uVar2;
      *(undefined4 *)((long)puVar4 + 0x24) = param_3;
      goto LAB_1003872bc;
    }
  }
  puVar4[0xd] = 0;
  *(undefined4 *)((long)puVar4 + 4) = 4;
LAB_100387200:
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0x20);
  uVar8 = puVar4[10];
  uVar10 = puVar4[0xd];
  uVar9 = puVar4[0xc];
  uVar14 = puVar4[7];
  uVar13 = puVar4[6];
  uVar12 = puVar4[9];
  uVar11 = puVar4[8];
  puVar5[0xb] = puVar4[0xb];
  puVar5[10] = uVar8;
  puVar5[0xd] = uVar10;
  puVar5[0xc] = uVar9;
  puVar5[7] = uVar14;
  puVar5[6] = uVar13;
  puVar5[9] = uVar12;
  puVar5[8] = uVar11;
  uVar9 = puVar4[1];
  uVar8 = *puVar4;
  uVar10 = puVar4[2];
  uVar12 = puVar4[5];
  uVar11 = puVar4[4];
  puVar5[3] = puVar4[3];
  puVar5[2] = uVar10;
  puVar5[5] = uVar12;
  puVar5[4] = uVar11;
  puVar5[1] = uVar9;
  *puVar5 = uVar8;
  return 1;
}

