// rea decompile_all
// name: FUN_1001ce63c
// address: 0x1001ce63c
// body: available
// range: 0x1001ce63c-0x1001ced53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001ce820) */
/* WARNING: Removing unreachable block (ram,0x0001001ce8ec) */

void FUN_1001ce63c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_1d0 [16];
  long alStack_1c0 [4];
  long local_1a0;
  long local_198;
  ulong uStack_190;
  undefined1 auStack_170 [72];
  undefined1 local_128;
  undefined8 local_120;
  long lStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined1 local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  __s7Network7NWErrorOMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = (long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s7Network12NWConnectionC5StateOMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x20,&local_b0,0x20,0);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  if ((*(long *)(lVar13 + 0x10) == 0) ||
     (lVar15 = param_2, uVar11 = param_3, FUN_1001a3028(), (uVar11 & 1) == 0)) {
    _swift_endAccess(&local_b0);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar13 + 0x38) + lVar15 * 8);
    local_198 = param_2;
    uStack_190 = param_3;
    _swift_endAccess(&local_b0);
    (**(code **)(lVar14 + 0x10))(lVar17,param_1,lVar3);
    lVar13 = lVar17;
    (**(code **)(lVar14 + 0x58))(lVar17,lVar3);
    iVar1 = (int)lVar13;
    if (iVar1 == *(int *)PTR___s7Network12NWConnectionC5StateO6failedyAeA7NWErrorOcAEmFWC_1009963a8)
    {
      (**(code **)(lVar14 + 0x60))(lVar17,lVar3);
      (**(code **)(lVar12 + 0x20))(lVar16,lVar17,lVar2);
      puVar9 = &DAT_100a7d400;
      FUN_100005c90(&DAT_100a7d400,PTR___s7Network7NWErrorOMa_1009963e0,
                    PTR___s7Network7NWErrorOs5ErrorAAMc_1009963f0);
      _swift_retain(lVar15);
      lVar3 = lVar2;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      uVar4 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
      local_d0 = 1;
      local_c8 = 0;
      uVar5 = uVar4;
      local_c0 = lVar3;
      puStack_b8 = puVar9;
      FUN_1001d2d04();
      puVar8 = &DAT_1009a3870;
      puVar6 = &local_d0;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar6,&DAT_1009a3870,uVar5);
      local_1a0 = lVar15;
      _swift_bridgeObjectRelease(puVar9);
      _swift_release(uVar4);
      local_128 = 1;
      FUN_100006cdc(0,0xc000000000000000);
      uVar11 = uStack_190;
      lVar13 = local_198;
      local_b0 = 1;
      lStack_a8 = local_198;
      local_a0 = uStack_190;
      uStack_98 = 3;
      local_90 = local_128;
      uStack_70 = 0xc000000000000000;
      local_78 = 0;
      local_120 = 1;
      lStack_118 = local_198;
      local_110 = uStack_190;
      uStack_108 = 3;
      local_100 = local_128;
      uStack_e0 = 0xc000000000000000;
      local_e8 = 0;
      local_f8 = puVar6;
      puStack_f0 = puVar8;
      local_88 = puVar6;
      puStack_80 = puVar8;
      FUN_1001d2ad0(&local_b0,auStack_170);
      FUN_1001d2d44(&local_120);
      puVar9 = &DAT_1009a3498;
      _swift_allocObject(&DAT_1009a3498,0x18,7);
      lVar3 = local_1a0;
      _swift_weakInit(puVar9 + 0x10,local_1a0);
      puVar8 = &DAT_1009a33f8;
      _swift_allocObject(&DAT_1009a33f8,0x18,7);
      _swift_weakInit(puVar8 + 0x10,unaff_x20);
      puVar10 = &DAT_1009a3538;
      _swift_allocObject(&DAT_1009a3538,0x28,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      *(long *)(puVar10 + 0x18) = lVar13;
      *(ulong *)(puVar10 + 0x20) = uVar11;
      _swift_retain(puVar9);
      _swift_retain(puVar8);
      FUN_1001cdaac(&local_b0,0x4b43415f4e5953,0xe700000000000000,FUN_1001d319c,puVar9,FUN_1001d31b8
                    ,puVar10);
      _swift_release_n(puVar9,2);
      _swift_release(puVar8);
      _swift_release(puVar10);
      FUN_1001d2d44(&local_b0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar17 + -0x20) = lVar13;
      *(ulong *)(lVar17 + -0x18) = uVar11;
      *(long *)(lVar17 + -0x10) = lVar16;
      FUN_1003fb4bc(FUN_1001d31c4,lVar17 + -0x30,0xd0000000000000a1,0x800000010089dec0,
                    0xd000000000000019,0x800000010089e070,0xab,0);
      _swift_release(lVar3);
      (**(code **)(lVar12 + 8))(lVar16,lVar2);
    }
    else if (iVar1 == *(int *)PTR___s7Network12NWConnectionC5StateO5readyyA2EmFWC_1009963a0) {
      if ((*(byte *)(lVar15 + 0x30) & 1) == 0) {
        *(undefined1 *)(lVar15 + 0x30) = 1;
        __s10Foundation11JSONEncoderCMa();
        _swift_allocObject();
        lVar2 = lVar15;
        _swift_retain(lVar15);
        __s10Foundation11JSONEncoderCACycfc();
        local_d0 = 1;
        local_c8 = 1;
        lVar3 = lVar2;
        FUN_1001d2d04();
        local_c0 = 0;
        puStack_b8 = (undefined *)0x0;
        puVar9 = &DAT_1009a3870;
        puVar6 = &local_d0;
        __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar6,&DAT_1009a3870,lVar3);
        _swift_release(lVar2);
        uVar11 = uStack_190;
        lVar2 = local_198;
        FUN_100006cdc(0,0xc000000000000000);
        local_b0 = 1;
        lStack_a8 = lVar2;
        local_a0 = uVar11;
        uStack_98 = 3;
        local_90 = 1;
        uStack_70 = 0xc000000000000000;
        local_78 = 0;
        local_120 = 1;
        lStack_118 = lVar2;
        local_110 = uVar11;
        uStack_108 = 3;
        local_100 = 1;
        uStack_e0 = 0xc000000000000000;
        local_e8 = 0;
        local_f8 = puVar6;
        puStack_f0 = puVar9;
        local_88 = puVar6;
        puStack_80 = puVar9;
        FUN_1001d2ad0(&local_b0,auStack_170);
        FUN_1001d2d44(&local_120);
        puVar9 = &DAT_1009a3498;
        puVar7 = puVar9;
        _swift_allocObject(&DAT_1009a3498,0x18,7);
        _swift_weakInit(puVar7 + 0x10,lVar15);
        puVar8 = &DAT_1009a33f8;
        _swift_allocObject(&DAT_1009a33f8,0x18,7);
        _swift_weakInit(puVar8 + 0x10,unaff_x20);
        _swift_allocObject(&DAT_1009a3498,0x18,7);
        _swift_weakInit(puVar9 + 0x10,lVar15);
        puVar10 = &DAT_1009a3560;
        _swift_allocObject(&DAT_1009a3560,0x20,7);
        *(undefined **)(puVar10 + 0x10) = puVar8;
        *(undefined **)(puVar10 + 0x18) = puVar9;
        _swift_retain(puVar7);
        _swift_retain(puVar8);
        _swift_retain(puVar9);
        FUN_1001cdaac(&local_b0,0x4b43415f4e5953,0xe700000000000000,thunk_FUN_1001d319c,puVar7,
                      FUN_1001d31d8,puVar10);
        _swift_release_n(puVar7,2);
        _swift_release(puVar8);
        _swift_release(puVar9);
        _swift_release(puVar10);
        FUN_1001d2d44(&local_b0);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar17 + -0x10) = lVar2;
        *(ulong *)(lVar17 + -8) = uVar11;
        FUN_1003fb48c(FUN_1001d31e0,lVar17 + -0x20,0xd0000000000000a1,0x800000010089dec0,
                      0xd000000000000019,0x800000010089e070,0x9e,0);
        _swift_release(lVar15);
      }
    }
    else if (iVar1 == *(int *)PTR___s7Network12NWConnectionC5StateO9cancelledyA2EmFWC_1009963b0) {
      _swift_retain(lVar15);
      FUN_1001cd2ec(local_198,uStack_190,0);
      _swift_release(lVar15);
    }
    else {
      (**(code **)(lVar14 + 8))(lVar17,lVar3);
    }
  }
  return;
}

