// rea decompile_all
// name: FUN_1001cedc4
// address: 0x1001cedc4
// body: available
// range: 0x1001cedc4-0x1001cf0c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001ceeac) */

void FUN_1001cedc4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_190 [16];
  long local_180;
  ulong uStack_178;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,&local_b0,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if ((*(long *)(lVar8 + 0x10) == 0) ||
     (lVar1 = param_1, uVar7 = param_2, FUN_1001a3028(), (uVar7 & 1) == 0)) {
    _swift_endAccess(&local_b0);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar1 * 8);
    _swift_endAccess(&local_b0);
    if (((*(byte *)(lVar8 + 0x30) & 1) == 0) && ((*(byte *)(lVar8 + 0x31) & 1) == 0)) {
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      lVar1 = lVar8;
      _swift_retain(lVar8);
      __s10Foundation11JSONEncoderCACycfc();
      local_d0 = 1;
      local_c8 = 0;
      uStack_b8 = 0xef74756f656d6974;
      local_c0 = 0x207463656e6e6f63;
      lVar2 = lVar1;
      FUN_1001d2d04();
      puVar4 = &DAT_1009a3870;
      puVar3 = &local_d0;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar3,&DAT_1009a3870,lVar2);
      _swift_release(lVar1);
      local_128 = 1;
      FUN_100006cdc(0,0xc000000000000000);
      local_b0 = 1;
      uStack_98 = 3;
      local_90 = local_128;
      uStack_70 = 0xc000000000000000;
      local_78 = 0;
      local_120 = 1;
      uStack_108 = 3;
      local_100 = local_128;
      uStack_e0 = 0xc000000000000000;
      local_e8 = 0;
      lStack_118 = param_1;
      local_110 = param_2;
      local_f8 = puVar3;
      puStack_f0 = puVar4;
      lStack_a8 = param_1;
      local_a0 = param_2;
      local_88 = puVar3;
      puStack_80 = puVar4;
      FUN_1001d2ad0(&local_b0,auStack_170);
      FUN_1001d2d44(&local_120);
      puVar4 = &DAT_1009a3498;
      _swift_allocObject(&DAT_1009a3498,0x18,7);
      _swift_weakInit(puVar4 + 0x10,lVar8);
      puVar5 = &DAT_1009a33f8;
      _swift_allocObject(&DAT_1009a33f8,0x18,7);
      _swift_weakInit(puVar5 + 0x10);
      puVar6 = &DAT_1009a34c0;
      _swift_allocObject(&DAT_1009a34c0,0x30,7);
      *(long *)(puVar6 + 0x10) = lVar8;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(long *)(puVar6 + 0x20) = param_1;
      *(ulong *)(puVar6 + 0x28) = param_2;
      _swift_retain(lVar8);
      _swift_retain(puVar4);
      _swift_retain(puVar5);
      FUN_1001cdaac(&local_b0,0x4b43415f4e5953,0xe700000000000000,FUN_1001d30b8,puVar4,FUN_1001d30c8
                    ,puVar6);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
      _swift_release(puVar6);
      FUN_1001d2d44(&local_b0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_180 = param_1;
      uStack_178 = param_2;
      FUN_1003fb4bc(FUN_1001d30d4,auStack_190,0xd0000000000000a1,0x800000010089dec0,
                    0xd00000000000001a,0x800000010089e020,0x8a,0);
      _swift_release(lVar8);
    }
  }
  return;
}

