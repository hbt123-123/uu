// rea decompile_all
// name: FUN_100500e88
// address: 0x100500e88
// body: available
// range: 0x100500e88-0x100501167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100500e88(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_200;
  int local_1f4;
  long local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  long local_108;
  undefined1 *puStack_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = (undefined1 *)0x0;
  __sSqMa();
  lVar9 = *(long *)(puVar2 + -8);
  uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_200 - uVar6;
  lVar10 = lVar8 - uVar6;
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') &&
     (local_1d8 = puVar2, FUN_1004fdea4(), unaff_x21 == 0)) {
    if (puVar2 < (undefined1 *)0x7fffffff) {
      puVar7 = (undefined1 *)unaff_x20[1];
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100501164);
        (*pcVar1)();
      }
      if (puVar2 <= puVar7) {
        local_1f0 = *unaff_x20;
        *unaff_x20 = (long)(puVar2 + local_1f0);
        unaff_x20[1] = (long)puVar7 - (long)puVar2;
        local_1e0 = puVar2;
        (**(code **)(lVar9 + 0x10))(lVar10,param_1,local_1d8);
        local_200 = *(long *)(param_2 + -8);
        local_1e8 = *(code **)(local_200 + 0x30);
        lVar3 = lVar10;
        (*local_1e8)(lVar10,1,param_2);
        local_1f4 = (int)lVar3;
        (**(code **)(lVar9 + 8))(lVar10,local_1d8);
        if (local_1f4 == 1) {
          (**(code **)(param_3 + 0x10))(lVar8,param_2,param_3);
          (**(code **)(local_200 + 0x38))(lVar8,0,1,param_2);
          (**(code **)(lVar9 + 0x28))(param_1,lVar8,local_1d8);
        }
        FUN_1005062d0(unaff_x20,auStack_1a8);
        FUN_10007f314(auStack_178,auStack_1d0,&DAT_100aaa0e8,&DAT_1008358c0);
        local_e8 = 1;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a8 = 1;
        uStack_80 = 0xf000000000000000;
        local_88 = 0;
        uStack_70 = 0xf000000000000000;
        uStack_78 = 0;
        local_108 = local_1f0;
        puStack_100 = local_1e0;
        local_f8 = local_1f0;
        uStack_f0 = 0;
        FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
        local_a0 = local_140;
        local_98 = local_138;
        FUN_100506304(auStack_1a8);
        local_90 = local_130;
        uVar4 = param_1;
        (*local_1e8)(param_1,1,param_2);
        if ((int)uVar4 != 1) {
          FUN_100501168(param_1,param_2,param_3);
          FUN_100506304(&local_108);
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100501168);
        (*pcVar1)();
      }
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
      uVar5 = 1;
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
      uVar5 = 3;
    }
    *puVar2 = uVar5;
    _swift_willThrow();
  }
  return;
}

