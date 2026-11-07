// rea decompile_all
// name: FUN_1005235c0
// address: 0x1005235c0
// body: available
// range: 0x1005235c0-0x100523897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005235c0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar13;
  ulong uVar14;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar13 = unaff_x20[2];
  bVar5 = (byte)unaff_x20[3];
  uVar12 = (uint)bVar5;
  if ((((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar12 == 0xff)) {
    FUN_1004f9a9c();
    _swift_allocError(&DAT_1009d0558,param_1,0,0);
    uVar11 = 5;
LAB_100523628:
    *param_1 = uVar11;
    _swift_willThrow();
  }
  else {
    uVar1 = (uint)(uVar13 >> 0x3c) & 3 | (uVar12 & 1) << 2;
    if (uVar1 < 3) {
      if (uVar1 != 0) {
        if (uVar1 != 1) {
          FUN_10051feb8(uVar2,uVar3,uVar13,uVar12 & 1);
          FUN_10052aec8(uVar2,uVar3);
          goto LAB_100523830;
        }
        if (((uVar2 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
          FUN_10052b670(uVar2);
          return;
        }
        FUN_1004f9a9c();
        _swift_allocError(&DAT_1009d0558,param_1,0,0);
        uVar11 = 6;
        goto LAB_100523628;
      }
      pcVar8 = "null";
      uVar9 = 4;
    }
    else {
      if (uVar1 != 3) {
        local_88 = uVar2;
        uStack_80 = uVar3;
        if (uVar1 == 4) {
          local_70 = &DAT_1009d6d28;
          ppuStack_68 = &PTR_PTR_1009cfa98;
          puVar7 = &local_88;
          local_78 = uVar13;
          FUN_10003f030();
          uVar10 = *puVar7;
          uVar4 = puVar7[1];
          uVar14 = puVar7[2];
          FUN_10051fe90(uVar2,uVar3,uVar13,bVar5);
          FUN_10051feb8(uVar2,uVar3,uVar13,uVar12 & 1);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_1005200ec(uVar6,uVar10,uVar4,uVar14);
        }
        else {
          local_78 = uVar13 & 0xcfffffffffffffff;
          local_70 = &DAT_1009d6eb8;
          ppuStack_68 = &PTR_PTR_1009cfa30;
          puVar7 = &local_88;
          FUN_10003f030();
          uVar10 = *puVar7;
          uVar4 = puVar7[1];
          uVar14 = puVar7[2];
          FUN_10051fe90(uVar2,uVar3,uVar13,bVar5);
          FUN_10051feb8(uVar2,uVar3,uVar13,uVar12 & 1);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_10051f544(uVar6,uVar10,uVar4,uVar14);
        }
        if (unaff_x21 != 0) {
          FUN_10051ff3c(uVar2,uVar3,uVar13,bVar5);
          FUN_10003f094(&local_88);
          return;
        }
        FUN_10003f094(&local_88);
        FUN_1004fa030(uVar6,uVar10);
LAB_100523830:
        FUN_10051ff3c(uVar2,uVar3,uVar13,bVar5);
        return;
      }
      if ((uVar2 & 1) == 0) {
        pcVar8 = "false";
        uVar9 = 5;
      }
      else {
        pcVar8 = "true";
        uVar9 = 4;
      }
    }
    FUN_1004f9e80(pcVar8,uVar9);
  }
  return;
}

