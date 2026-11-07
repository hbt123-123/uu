// rea decompile_all
// name: FUN_100216d4c
// address: 0x100216d4c
// body: available
// range: 0x100216d4c-0x100216f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100216e30) */

undefined1  [16] FUN_100216d4c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_e0 [16];
  long *local_d0;
  undefined8 *puStack_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 != 0) {
      if ((long)(int)param_1 != param_1 >> 0x20) goto LAB_100216d98;
      goto LAB_100216f1c;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_100216f1c;
LAB_100216d98:
    lVar3 = param_1;
    uVar4 = param_2;
    uVar6 = param_3;
    FUN_100180c50();
    if (0xe < uVar4 >> 0x3c) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_c0 = (uint)param_3;
      local_b8 = param_4;
      local_b0 = param_1;
      local_a8 = param_2;
      FUN_1003fb4ec(FUN_10021887c,&local_d0,0xd0000000000000b2,0x8000000100885c70,
                    &DAT_d000000000000030,0x80000001008a50e0,0x110,0);
      uVar6 = 1;
      lVar3 = 4;
      goto LAB_100216f24;
    }
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lVar2 = lVar3;
    uVar5 = uVar4;
    FUN_100436a0c();
    local_98 = lVar2;
    uStack_90 = uVar5;
    local_88 = uVar6;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_d0 = &local_98;
    puStack_c8 = &local_80;
    local_c0 = local_c0 & 0xffffff00;
    local_b8 = 100;
    local_b0 = local_b0 & 0xffffffffffffff00;
    FUN_10012308c(FUN_10020d004,auStack_e0,lVar3,uVar4);
    FUN_100006cc8(lVar3,uVar4);
    FUN_100040bb4(&local_80,&DAT_100a79820,&DAT_100812f70);
    lVar3 = local_98;
    FUN_100006cdc(uStack_90,local_88);
  }
  else {
    if ((uVar7 == 2) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)))
    goto LAB_100216d98;
LAB_100216f1c:
    lVar3 = 0;
  }
  uVar6 = 0;
LAB_100216f24:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = lVar3;
  return auVar8;
}

