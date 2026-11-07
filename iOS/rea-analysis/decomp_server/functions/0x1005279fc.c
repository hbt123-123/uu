// rea decompile_all
// name: FUN_1005279fc
// address: 0x1005279fc
// body: available
// range: 0x1005279fc-0x100527c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005279fc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined1 auStack_c0 [40];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar5 = param_2[-1];
  lVar4 = *(long *)(lVar5 + 0x40);
  puVar3 = param_2;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_10090176c);
  if ((param_2 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
    uVar6 = 7;
  }
  else {
    (*(code *)puVar3[1])(&local_98,param_2);
    FUN_10052a5d0(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                  *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_90;
    *(undefined8 *)(unaff_x20 + 0x80) = local_98;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_80;
    *(undefined8 *)(unaff_x20 + 0x90) = local_88;
    *(undefined8 *)(unaff_x20 + 0xa0) = local_78;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_70;
    (**(code **)(lVar5 + 0x10))(auStack_120 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
    puVar2 = &DAT_100aaa138;
    FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
    puVar3 = &local_f0;
    _swift_dynamicCast(puVar3,auStack_120 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,puVar2,6);
    if ((int)puVar3 != 0) {
      FUN_1000a0074(&local_f0,auStack_c0);
      FUN_1000b142c(auStack_c0,&local_f0);
      FUN_1000ce034(&local_f0,local_d8);
      (**(code **)(local_d0 + 0x10))();
      FUN_10003f094(auStack_c0);
      if (unaff_x21 == 0) {
        (**(code **)(lVar5 + 8))(param_1,param_2);
        FUN_1000b142c(&local_f0,auStack_118);
        _swift_dynamicCast(param_1,auStack_118,puVar2,param_2,7);
      }
      FUN_10003f094(&local_f0);
      return;
    }
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    FUN_100040bb4(&local_f0,&DAT_100aaa140,&DAT_100837af0);
    puVar3 = (undefined8 *)0x7b;
    FUN_1005363c8();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100527c98);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar4;
    if (-1 < lVar4) {
      FUN_10053320c();
      if (((ulong)puVar3 & 1) != 0) {
        return;
      }
      (**(code **)(param_3 + 0x40))();
      return;
    }
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
    uVar6 = 0x13;
  }
  puVar3[1] = uVar6;
  *puVar3 = 0;
  _swift_willThrow();
  return;
}

