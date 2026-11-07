// rea decompile_all
// name: FUN_10050130c
// address: 0x10050130c
// body: available
// range: 0x10050130c-0x100501583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005014f0) */

void FUN_10050130c(undefined1 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_1f0;
  long lStack_1e8;
  long local_1e0;
  long local_1d8;
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
  
  lVar8 = *(long *)(param_2 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&local_1f0 - uVar4;
  lVar6 = lVar7 - uVar4;
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') && (FUN_1004fdea4(), unaff_x21 == 0)) {
    if (param_1 < (undefined1 *)0x7fffffff) {
      puVar5 = (undefined1 *)unaff_x20[1];
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100501584);
        (*pcVar1)();
      }
      if (param_1 <= puVar5) {
        lStack_1e8 = *unaff_x20;
        *unaff_x20 = (long)(param_1 + lStack_1e8);
        unaff_x20[1] = (long)puVar5 - (long)param_1;
        local_1f0 = param_1;
        local_1e0 = param_3;
        local_1d8 = param_2;
        (**(code **)(param_3 + 0x10))(lVar6,param_2);
        FUN_1005062d0();
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
        local_108 = lStack_1e8;
        puStack_100 = local_1f0;
        local_f8 = lStack_1e8;
        uStack_f0 = 0;
        FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
        local_a0 = local_140;
        local_98 = local_138;
        FUN_100506304(auStack_1a8);
        local_90 = local_130;
        FUN_100501168(lVar6,local_1d8,local_1e0);
        (**(code **)(lVar8 + 0x10))(lVar7,lVar6,param_2);
        uVar2 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar7,uVar2);
        (**(code **)(lVar8 + 8))(lVar6,param_2);
        FUN_100506304(&local_108);
        *(undefined1 *)(unaff_x20 + 4) = 1;
        return;
      }
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      uVar3 = 1;
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      uVar3 = 3;
    }
    *param_1 = uVar3;
    _swift_willThrow();
  }
  return;
}

