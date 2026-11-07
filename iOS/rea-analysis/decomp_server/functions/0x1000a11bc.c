// rea decompile_all
// name: FUN_1000a11bc
// address: 0x1000a11bc
// body: available
// range: 0x1000a11bc-0x1000a136b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1000a11bc(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  ulong *local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_100a76920;
  local_98 = param_1;
  local_90 = param_3;
  puStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_100004bb4(&DAT_100a76920,&DAT_10080b400);
  lVar8 = *(long *)(puVar3 + -8);
  lVar13 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar10 = lVar13 + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_a0 + -uVar10;
  pcVar11 = *(code **)(lVar8 + 0x10);
  (*pcVar11)(puVar6,param_1,puVar3);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar12 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10099a168;
  _swift_allocObject(&DAT_10099a168,uVar12 + lVar13,uVar7 | 7);
  pcVar9 = *(code **)(lVar8 + 0x20);
  (*pcVar9)(puVar4 + uVar12,puVar6,puVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_1000a20b0;
  *(undefined **)(param_2 + 0x18) = puVar4;
  FUN_10007ed2c(uVar1,uVar2);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = (long)puVar6 - uVar10;
  (*pcVar11)(lVar8,local_98,puVar3);
  puVar4 = &DAT_10099a190;
  _swift_allocObject(&DAT_10099a190,uVar12 + lVar13,uVar7 | 7);
  (*pcVar9)(puVar4 + uVar12,lVar8,puVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(code **)(param_2 + 0x20) = FUN_1000a2174;
  *(undefined **)(param_2 + 0x28) = puVar4;
  FUN_10007ed2c(uVar1,uVar2);
  puVar3 = PTR__swift_isaMask_100995ee0;
  puVar5 = puStack_88;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *local_90) + 200))
            (puStack_88,local_80,uStack_78,local_70,uStack_68,param_2);
  (**(code **)((*(ulong *)puVar3 & *puVar5) + 600))();
  return 0;
}

