// rea decompile_all
// name: FUN_100217224
// address: 0x100217224
// body: available
// range: 0x100217224-0x1002174af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002173e4) */

undefined1  [16] FUN_100217224(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long alStack_d0 [7];
  long local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar5 = 0;
  FUN_1000e984c();
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)alStack_d0 + lVar4);
  FUN_100436a0c();
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease();
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    alStack_d0[1] = param_3;
    alStack_d0[2] = param_2;
    alStack_d0[3] = lVar5;
    FUN_10006ff64(0,lVar11,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    local_98 = *(long *)(lVar8 + 0x48);
    alStack_d0[5] = 0xc000000000000000;
    alStack_d0[4] = 0;
    do {
      puVar9 = local_78;
      FUN_100082394(param_1,puVar10,FUN_1000e984c);
      uVar6 = *puVar10;
      uVar2 = *(undefined8 *)((long)alStack_d0 + lVar4 + 8);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uVar7 = *(undefined8 *)((long)alStack_d0 + lVar4 + 0x10);
      uVar3 = *(undefined8 *)((long)alStack_d0 + lVar4 + 0x18);
      FUN_1000d27dc(puVar10,FUN_1000e984c);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      local_78 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_10006ff64(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = local_78;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_78 + uVar1 * 0x30 + 0x20) = uVar6;
      *(undefined8 *)(local_78 + uVar1 * 0x30 + 0x28) = uVar2;
      *(undefined8 *)(local_78 + uVar1 * 0x30 + 0x30) = uVar7;
      *(undefined8 *)(local_78 + uVar1 * 0x30 + 0x38) = uVar3;
      *(long *)(local_78 + uVar1 * 0x30 + 0x48) = alStack_d0[5];
      *(long *)(local_78 + uVar1 * 0x30 + 0x40) = alStack_d0[4];
      param_1 = param_1 + local_98;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar5 = alStack_d0[3];
    _swift_bridgeObjectRelease(alStack_d0[3]);
    param_2 = alStack_d0[2];
    param_3 = alStack_d0[1];
  }
  local_78 = puVar9;
  uStack_70 = param_2;
  local_68 = param_3;
  FUN_100124214();
  FUN_100537580(&local_88,0,0,&DAT_1009c95a8,PTR___s10Foundation4DataVN_1009961e8,lVar5,
                &PTR_PTR_1009d16b0);
  uVar6 = local_88;
  uVar7 = uStack_80;
  FUN_1001806d8(local_88,uStack_80);
  FUN_100006cdc(local_88,uStack_80);
  _swift_bridgeObjectRelease(puVar9);
  FUN_100006cdc(param_2,param_3);
  auVar12._8_8_ = uVar7;
  auVar12._0_8_ = uVar6;
  return auVar12;
}

