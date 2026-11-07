// rea decompile_all
// name: FUN_100035cf0
// address: 0x100035cf0
// body: available
// range: 0x100035cf0-0x10003603b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100035cf0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong auStack_a0 [2];
  char *local_90;
  long local_88 [2];
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar6 = 0;
  FUN_100010d20();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar13 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)auStack_a0 + lVar6);
  local_88[1] = *param_1;
  auStack_a0[1] = *(ulong *)(local_88[1] + 0x10);
  if (auStack_a0[1] == 0) {
    uVar11 = 0xec00000073435020;
    uVar9 = 0x64756f6c63206f4e;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100021c68(0,auStack_a0[1],0);
    local_88[0] = local_88[1] +
                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    local_90 = "Get cloud PC list";
    uVar10 = 0;
    do {
      puVar4 = local_68;
      if (*(ulong *)(local_88[1] + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003603c);
        (*pcVar5)();
      }
      uVar1 = uVar10 + 1;
      FUN_10000fc0c(local_88[0] + *(long *)(lVar13 + 0x48) * uVar10,puVar8,FUN_100010d20);
      local_78 = (undefined *)0x0;
      uStack_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x3d);
      __sSS6appendyySSF(0x203a656d614e,0xe600000000000000);
      __sSS6appendyySSF(*(undefined8 *)((long)&local_90 + lVar6),
                        *(undefined8 *)((long)local_88 + lVar6));
      __sSS6appendyySSF(0x502064756f6c430a,0xee00203a44492043);
      __sSS6appendyySSF(*puVar8,*(undefined8 *)((long)auStack_a0 + lVar6 + 8));
      __sSS6appendyySSF(0x73207265776f500a,0xee00203a65746174);
      __sSS6appendyySSF(*(undefined8 *)((long)local_88 + lVar6 + 8),
                        *(undefined8 *)((long)&local_78 + lVar6));
      __sSS6appendyySSF(0xd000000000000013,(ulong)local_90 | 0x8000000000000000);
      bVar3 = *(byte *)((long)&uStack_70 + lVar6);
      uVar9 = 0x657463656e6e6f63;
      if (bVar3 != 2) {
        uVar9 = 0x64656c696166;
      }
      uVar11 = 0xe900000000000064;
      if (bVar3 != 2) {
        uVar11 = 0xe600000000000000;
      }
      uVar2 = 0x656e6e6f63736964;
      if (bVar3 != 0) {
        uVar2 = 0x697463656e6e6f63;
      }
      uVar12 = 0xec00000064657463;
      if (bVar3 != 0) {
        uVar12 = 0xea0000000000676e;
      }
      if (bVar3 < 2) {
        uVar11 = uVar12;
        uVar9 = uVar2;
      }
      __sSS6appendyySSF(uVar9,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      uVar9 = uStack_70;
      puVar7 = local_78;
      FUN_10000fc50(puVar8,FUN_100010d20);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        FUN_100021c68(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar10 + 1;
      *(undefined **)(local_68 + uVar10 * 0x10 + 0x20) = puVar7;
      *(undefined8 *)(local_68 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = uVar1;
    } while (auStack_a0[1] != uVar1);
    puVar7 = &DAT_100102c38;
    local_78 = local_68;
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar8 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar9 = 0xa0a;
    uVar11 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0xa0a,0xe200000000000000,puVar7,puVar8);
    _swift_release(puVar4);
  }
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = uVar9;
  return auVar14;
}

