// rea decompile_all
// name: FUN_1001ff3b4
// address: 0x1001ff3b4
// body: available
// range: 0x1001ff3b4-0x1001ff5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ff3b4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  ulong local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined4 uStack_90;
  byte bStack_8c;
  byte local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  undefined4 local_58;
  byte local_54;
  
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    local_a8 = param_2[3];
    uVar7 = param_2[2];
    local_a0 = param_2[4];
    uStack_98 = (undefined5)param_2[5];
    uVar3 = *(undefined8 *)((long)param_2 + 0x2d);
    uStack_93 = (undefined3)uVar3;
    uStack_90 = (undefined4)((ulong)uVar3 >> 0x18);
    bStack_8c = (byte)((ulong)uVar3 >> 0x38);
    local_c0._0_1_ = (byte)uVar5;
    bVar2 = (byte)local_c0;
    local_c0._7_1_ = (undefined1)((ulong)uVar5 >> 0x38);
    local_c0 = uVar5;
    uStack_b8 = uVar6;
    uStack_b0 = uVar7;
    if ((((bStack_8c >> 1 == 0) && (CONCAT35(uStack_93,uStack_98) >> 0x21 == 0)) &&
        ((local_a8 & 0x3000000000000000) == 0x3000000000000000)) &&
       ((local_a0 & 0xfffffffe00000000) == 0x7ffffffe00000000)) {
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1001ff5f0,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                    0x80000001008a2080,499,0);
      _swift_release(param_1);
    }
    else {
      uVar4 = (undefined4)((ulong)uVar5 >> 8);
      uVar1 = (undefined2)((ulong)uVar5 >> 0x28);
      if (bStack_8c >> 6 == 0) {
        local_88 = (byte)local_c0;
        local_81 = local_c0._7_1_;
        local_54 = bStack_8c & 0x3f;
        local_87 = uVar4;
        local_83 = uVar1;
        local_80 = uVar6;
        uStack_78 = uVar7;
        local_70 = local_a8;
        uStack_68 = local_a0;
        local_60 = CONCAT35(uStack_93,uStack_98);
        local_58 = uStack_90;
        FUN_1002036e0(&local_c0,&local_110);
        FUN_100202d80(param_3,param_4,&local_88);
      }
      else if (bStack_8c >> 6 == 1) {
        local_110 = (byte)local_c0;
        local_109 = local_c0._7_1_;
        local_f0 = (undefined4)local_a0;
        local_ec = (undefined1)(local_a0 >> 0x20);
        local_10f = uVar4;
        local_10b = uVar1;
        local_108 = uVar6;
        uStack_100 = uVar7;
        local_f8 = local_a8;
        FUN_1002036e0(&local_c0,&local_88);
        FUN_1002033ac(param_3,param_4,&local_110);
      }
      else {
        FUN_1002036e0(&local_c0,&local_88);
        FUN_100202bb0(param_3,param_4,bVar2 & 1,uVar6,uVar7);
      }
      _swift_release(param_1);
      FUN_100040bb4(&local_c0,&DAT_100a7d928,&DAT_100812bf8);
    }
  }
  return;
}

