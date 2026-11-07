// rea decompile_all
// name: FUN_1006858d0
// address: 0x1006858d0
// body: available
// range: 0x1006858d0-0x100685bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100685938 to 0x10068e548 FUN_10068e548 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006858d0(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  long lStack_210;
  undefined1 local_200;
  undefined2 local_1ff;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined7 uStack_1a8;
  undefined4 uStack_1a1;
  undefined1 auStack_198 [24];
  undefined8 local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  long lStack_150;
  undefined7 local_148;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined2 uStack_13f;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined2 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined2 uStack_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  
  if (*(long *)(param_2 + 0x10) == 1) {
    FUN_1000b142c(param_2 + 0x20,&local_128);
    _swift_bridgeObjectRelease(param_2);
    thunk_FUN_100686184(&local_1d0);
    FUN_1000b142c(&local_128,&local_170);
    uStack_a8 = unaff_x20[1];
    local_b0 = *unaff_x20;
    uStack_98 = unaff_x20[3];
    uStack_a0 = unaff_x20[2];
    local_90 = unaff_x20[4];
    uStack_88 = (undefined7)unaff_x20[5];
    uStack_81 = *(undefined4 *)((long)unaff_x20 + 0x2f);
    FUN_10003f030(&local_128,local_110);
    uVar7 = local_110;
    lVar8 = lStack_108;
    (**(code **)(lStack_108 + 8))(local_110,lStack_108);
    if ((param_3 & 1) == 0) {
      FUN_100684c6c(&local_f0);
    }
    else {
      FUN_100685170();
      FUN_10068e56c(uVar7,lVar8,1);
    }
    uVar5 = uStack_bf;
    uVar4 = uStack_c0;
    lVar8 = lStack_d0;
    uVar3 = local_d8;
    uVar2 = local_e0;
    uVar1 = uStack_e8;
    uVar7 = local_f0;
    FUN_10003f094(&local_128);
    uStack_228 = uVar1;
    local_230 = uVar7;
    local_220 = uVar2;
    lStack_210 = lVar8;
    local_218 = uVar3;
    local_200 = uVar4;
    local_1ff = uVar5;
    FUN_10067f3d8(&local_1d0);
    FUN_1006855ec(&local_230,&local_170);
  }
  else {
    if (*(long *)(param_2 + 0x10) == 0) {
      _swift_bridgeObjectRelease(param_2);
      FUN_10068e548(param_1);
      return;
    }
    local_130 = param_2;
    _swift_bridgeObjectRetain(param_2);
    FUN_100685bdc(&local_b0,0);
    FUN_10003f094(&local_b0);
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100685bdc);
      (*pcVar6)();
    }
    FUN_1000b142c(param_2 + 0x20,auStack_198);
    uStack_a8 = unaff_x20[1];
    local_b0 = *unaff_x20;
    uStack_98 = unaff_x20[3];
    uStack_a0 = unaff_x20[2];
    local_90 = unaff_x20[4];
    uStack_88 = (undefined7)unaff_x20[5];
    uStack_81 = *(undefined4 *)((long)unaff_x20 + 0x2f);
    FUN_10003f030(auStack_198,local_180);
    uVar7 = local_180;
    lVar8 = lStack_178;
    (**(code **)(lStack_178 + 8))(local_180,lStack_178);
    if ((param_3 & 1) == 0) {
      FUN_100684c6c(&local_128);
    }
    else {
      FUN_100685170();
      FUN_10068e56c(uVar7,lVar8,1);
    }
    FUN_10003f094(auStack_198);
    lVar8 = local_130;
    uStack_168 = uStack_120;
    local_170 = local_128;
    lStack_150 = lStack_108;
    local_158 = local_110;
    local_160 = local_118;
    local_148 = (undefined7)local_100;
    uStack_141 = (undefined1)((ulong)local_100 >> 0x38);
    uStack_140 = local_f8;
    uStack_13f = local_f7;
    FUN_10068e538(param_1,&local_f0);
    FUN_1006858d0(param_1,lVar8);
    FUN_1000b142c(param_2 + 0x20,auStack_1f8);
    _swift_bridgeObjectRelease(param_2);
    uStack_e8 = uStack_168;
    local_f0 = local_170;
    local_d8 = local_158;
    local_e0 = local_160;
    uStack_c8 = local_148;
    lStack_d0 = lStack_150;
    uStack_c1 = uStack_141;
    uStack_c0 = uStack_140;
    uStack_bf = uStack_13f;
    FUN_10068e538(&local_f0,&local_1d0);
    FUN_1006855ec(&local_f0,auStack_1f8);
    FUN_10068e548(param_1);
    uStack_1c8 = uStack_168;
    local_1d0 = local_170;
    uStack_1b8 = local_158;
    uStack_1c0 = local_160;
    uStack_1a8 = local_148;
    local_1b0 = lStack_150;
    uStack_1a1 = CONCAT22(uStack_13f,CONCAT11(uStack_140,uStack_141));
    param_1 = &local_1d0;
  }
  FUN_10068e548(param_1);
  return;
}

