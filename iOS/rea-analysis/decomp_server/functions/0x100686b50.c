// rea decompile_all
// name: FUN_100686b50
// address: 0x100686b50
// body: available
// range: 0x100686b50-0x100686e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100686d20) */

undefined1  [16] FUN_100686b50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_a0 [6];
  undefined1 auStack_70 [32];
  
  puVar1 = &DAT_100ab9ec8;
  uVar7 = 0;
  FUN_100004bb4();
  uVar6 = (long)local_a0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = uVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100686c5c:
    (**(code **)(lVar9 + 0x38))(uVar6,1,1,lVar2);
LAB_100686c74:
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    uVar7 = 1;
    uVar4 = uVar6;
    (**(code **)(lVar9 + 0x30))(uVar6,1,lVar2);
    if ((int)uVar4 != 1) {
      uVar7 = 0;
      FUN_100040bb4(uVar6,&DAT_100ab9ec8,&DAT_10084d548);
    }
  }
  else {
    lVar3 = 3;
    FUN_10068c64c(3);
    if ((uVar7 & 1) == 0) goto LAB_100686c5c;
    FUN_10003e8bc(*(long *)(param_1 + 0x38) + lVar3 * 0x20,auStack_70);
    uVar7 = uVar6;
    _swift_dynamicCast(uVar6,auStack_70,PTR___sypN_100995e88 + 8,lVar2,6);
    (**(code **)(lVar9 + 0x38))(uVar6,(uint)uVar7 ^ 1,1,lVar2);
    uVar7 = uVar6;
    (**(code **)(lVar9 + 0x30))(uVar6,1,lVar2);
    if ((int)uVar7 == 1) goto LAB_100686c74;
    (**(code **)(lVar9 + 0x20))(lVar8,uVar6,lVar2);
    uVar7 = uVar6;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = 2;
    FUN_10068c64c(2);
    if ((uVar7 & 1) != 0) {
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + lVar3 * 0x20,auStack_70);
      puVar5 = local_a0;
      _swift_dynamicCast(puVar5,auStack_70,PTR___sypN_100995e88 + 8,PTR___sSiN_100995968,6);
      if (((ulong)puVar5 & 1) != 0) goto LAB_100686d08;
    }
  }
  local_a0[0] = 10;
LAB_100686d08:
  lVar3 = lVar8;
  FUN_1006865b8(lVar8,param_1,local_a0[0]);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = lVar3;
  return auVar10;
}

