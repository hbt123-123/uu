// rea decompile_all
// name: FUN_1004ee3a4
// address: 0x1004ee3a4
// body: available
// range: 0x1004ee3a4-0x1004ee513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004ee49c) */

void FUN_1004ee3a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xf000000000000000;
  uVar8 = *(ulong *)(param_1 + 0x20);
  lVar5 = param_1;
  if (uVar8 >> 0x3c < 0xf) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    FUN_100008184(uVar10,uVar8);
    lVar5 = 0;
    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
    local_78 = (ulong)uVar1;
    uStack_70 = uVar10;
    local_68 = uVar8;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_1004f2f2c();
  (*pcVar9)(&local_78,&DAT_1009cd418,lVar5,param_3,param_4);
  uVar4 = local_68;
  uVar3 = uStack_70;
  uVar2 = local_78;
  uVar6 = local_78;
  uVar10 = uStack_70;
  uVar7 = local_68;
  if ((unaff_x21 == 0) && (local_68 >> 0x3c < 0xf)) {
    if (uVar8 >> 0x3c < 0xf) {
      pcVar9 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_70,local_68);
      (*pcVar9)(param_3,param_4);
    }
    else {
      FUN_100008184(uStack_70,local_68);
    }
    switchD_10004048c::caseD_6d(local_78,uStack_70,local_68);
    uVar6 = *(ulong *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ulong *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x10) = uVar2 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(ulong *)(param_1 + 0x20) = uVar4;
  }
  switchD_10004048c::caseD_6d(uVar6,uVar10,uVar7);
  return;
}

