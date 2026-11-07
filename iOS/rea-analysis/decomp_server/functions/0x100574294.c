// rea decompile_all
// name: FUN_100574294
// address: 0x100574294
// body: available
// range: 0x100574294-0x10057442b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100574338) */
/* WARNING: Removing unreachable block (ram,0x0001005743a4) */

void FUN_100574294(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uStack_78 = param_1[5];
  local_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  local_60 = param_1[8];
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar4 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(1);
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    local_b0 = local_60;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    FUN_100008184(lVar4,lVar1);
    _swift_bridgeObjectRetain(lVar5);
    FUN_10059e3f8(&local_f0,lVar4,lVar1,lVar5,lVar6);
    FUN_100541944(lVar4,lVar1,lVar5,lVar6);
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    local_60 = local_b0;
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_1005bad30(*unaff_x20,999);
  }
  FUN_100563e08(&local_a0,1000,0x20000000,unaff_x20[3]);
  lVar5 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)lVar5;
      lVar5 = lVar5 >> 0x20;
      goto LAB_100574418;
    }
    if ((unaff_x20[2] & 0xff000000000000U) == 0) goto LAB_1005743ac;
  }
  else {
    if (uVar3 != 2) goto LAB_1005743ac;
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
LAB_100574418:
    if (lVar4 == lVar5) goto LAB_1005743ac;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_a0);
LAB_1005743ac:
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = local_60;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}

