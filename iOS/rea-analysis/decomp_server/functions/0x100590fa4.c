// rea decompile_all
// name: FUN_100590fa4
// address: 0x100590fa4
// body: available
// range: 0x100590fa4-0x100591123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100590fa4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_178 [72];
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 local_f0;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar4,lVar3);
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_1005bbc5c(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lStack_d8 = unaff_x20[6];
  local_e0 = unaff_x20[5];
  lStack_c8 = unaff_x20[8];
  lStack_d0 = unaff_x20[7];
  lStack_b8 = unaff_x20[10];
  local_c0 = unaff_x20[9];
  lStack_a8 = unaff_x20[0xc];
  lStack_b0 = unaff_x20[0xb];
  local_a0 = (undefined1)unaff_x20[0xd];
  if (local_e0 != 0) {
    lStack_88 = unaff_x20[7];
    local_90 = unaff_x20[6];
    lStack_78 = unaff_x20[9];
    lStack_80 = unaff_x20[8];
    local_70 = unaff_x20[10];
    uStack_68 = (undefined1)unaff_x20[0xb];
    uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x61);
    uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
    local_98 = local_e0;
    __ss6HasherV8_combineyySuF(3);
    lStack_118 = unaff_x20[8];
    lStack_120 = unaff_x20[7];
    lStack_108 = unaff_x20[10];
    local_110 = unaff_x20[9];
    lStack_f8 = unaff_x20[0xc];
    lStack_100 = unaff_x20[0xb];
    local_f0 = (undefined1)unaff_x20[0xd];
    lStack_128 = unaff_x20[6];
    local_130 = unaff_x20[5];
    FUN_1005a8404(&local_130,auStack_178);
    FUN_100573e6c(param_1);
    FUN_100040bb4(&local_e0,&DAT_100aab4a8,&DAT_10083e020);
  }
  lVar3 = unaff_x20[1];
  uVar1 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1005910fc;
    }
    lVar4 = (long)(int)lVar3;
    lVar3 = lVar3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (lVar4 == lVar3) {
    return;
  }
LAB_1005910fc:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

