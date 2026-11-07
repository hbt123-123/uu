// rea decompile_all
// name: FUN_1006b7ec4
// address: 0x1006b7ec4
// body: available
// range: 0x1006b7ec4-0x1006b804b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b7ec4(long param_1,int *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  
  if (*param_2 == 1) {
    lVar2 = *(long *)(param_2 + 0xfa);
    if (param_3 == 0) {
      param_3 = -1;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x7e);
    uVar4 = *(undefined8 *)(param_2 + 0x7c);
    uStack_b0 = (ulong)(param_3 != -1);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x1f8) = uVar5;
    *(undefined8 *)(param_1 + 0x1f0) = uVar4;
    uStack_6c = *(undefined8 *)(param_1 + 0x74);
    local_74 = *(undefined8 *)(param_1 + 0x6c);
    uStack_5c = *(undefined8 *)(param_1 + 0x84);
    local_64 = *(undefined8 *)(param_1 + 0x7c);
    uStack_4c = *(undefined8 *)(param_1 + 0x94);
    local_54 = *(undefined8 *)(param_1 + 0x8c);
    local_44 = *(undefined4 *)(param_1 + 0x9c);
    uStack_9c = *(undefined8 *)(param_1 + 0x44);
    local_a4 = *(undefined8 *)(param_1 + 0x3c);
    uStack_8c = *(undefined8 *)(param_1 + 0x54);
    local_94 = *(undefined8 *)(param_1 + 0x4c);
    uStack_7c = *(undefined8 *)(param_1 + 100);
    local_84 = *(undefined8 *)(param_1 + 0x5c);
    local_d0 = CONCAT44(param_2[0x29],*(undefined4 *)(param_1 + 0x10));
    local_b8 = *(undefined8 *)(param_2 + 0x2e);
    uStack_c0 = *(undefined8 *)(param_2 + 0x2c);
    local_c8 = *(undefined8 *)(param_2 + 0x2a);
    local_a8 = 0;
    FUN_1006bb148(param_1,&local_d0,param_3,1,lVar2 != 0);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x148);
    if (param_2[0x2f] == 1) {
      sVar3 = 0;
    }
    else {
      sVar3 = 4L << ((ulong)(uint)param_2[0x2a] & 0x3f);
    }
    uVar1 = param_2[0xca];
    _memcpy(*(void **)(param_1 + 0x330),*(void **)(param_2 + 0xcc),
            4L << ((ulong)(uint)param_2[0x2b] & 0x3f));
    _memcpy(*(void **)(param_1 + 0x340),*(void **)(param_2 + 0xd0),sVar3);
    sVar3 = 0;
    if (uVar1 != 0) {
      sVar3 = 4L << ((ulong)uVar1 & 0x3f);
    }
    _memcpy(*(void **)(param_1 + 0x338),*(void **)(param_2 + 0xce),sVar3);
    if (*(ulong *)(param_1 + 0x158) < *(ulong *)(param_1 + 0x150)) {
      *(ulong *)(param_1 + 0x158) = *(ulong *)(param_1 + 0x150);
    }
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar6 = *(undefined8 *)(param_2 + 0xc6);
    uVar5 = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0xc2);
    *(undefined8 *)(param_1 + 0x300) = uVar4;
    *(undefined8 *)(param_1 + 0x318) = uVar6;
    *(undefined8 *)(param_1 + 0x310) = uVar5;
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 200);
    *(int *)(param_1 + 0x130) = param_2[0x4c];
    _memcpy(*(void **)(param_1 + 0x2f0),*(void **)(param_2 + 0xbc),0x11f0);
    return 0;
  }
  return 0xffffffffffffffc4;
}

