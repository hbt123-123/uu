// rea decompile_all
// name: FUN_100446da0
// address: 0x100446da0
// body: available
// range: 0x100446da0-0x100446f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100446eb8) */

void FUN_100446da0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xf000000000000000;
  uVar6 = *param_1;
  uVar4 = param_1[2];
  puVar3 = param_1;
  if ((uVar4 & 0x3000000000000000) == 0x1000000000000000) {
    uVar8 = param_1[1];
    FUN_10020376c(uVar6,uVar8,uVar4,FUN_100008184);
    puVar3 = (ulong *)0x0;
    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
    local_78 = uVar6 & 0xffffffff;
    uStack_70 = uVar8;
    local_68 = uVar4 & 0xcfffffffffffffff;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_100448660();
  (*pcVar7)(&local_78,&DAT_1009c1558,puVar3,param_3,param_4);
  uVar2 = local_68;
  uVar1 = uStack_70;
  uVar8 = local_78;
  if ((unaff_x21 == 0) && (local_68 >> 0x3c < 0xf)) {
    if ((uVar4 & 0x3000000000000000) == 0 && 0xfffffffeffffffff < uVar6) {
      FUN_100008184(uStack_70,local_68);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_70,local_68);
      (*pcVar7)(param_3,param_4);
    }
    switchD_10004048c::caseD_6d(local_78,uStack_70,local_68);
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    *param_1 = uVar8 & 0xffffffff;
    param_1[1] = uVar1;
    param_1[2] = uVar2 | 0x1000000000000000;
    FUN_10020373c(uVar4,uVar6,uVar5);
  }
  else {
    switchD_10004048c::caseD_6d(local_78,uStack_70,local_68);
  }
  return;
}

