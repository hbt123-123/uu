// rea decompile_all
// name: FUN_1001cffbc
// address: 0x1001cffbc
// body: available
// range: 0x1001cffbc-0x1001d0213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cffbc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_c0 [16];
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = &DAT_100a7d408;
  FUN_100004bb4(&DAT_100a7d408,&DAT_100812378);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar6 = 0;
  __s7Network7NWErrorOMa();
  lVar8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x32) = 0;
    _swift_beginAccess(param_1 + 0x40,auStack_78,0,0);
    lVar9 = *(long *)(param_1 + 0x40);
    if (*(long *)(lVar9 + 0x10) != 0) {
      local_98 = param_4;
      _swift_beginAccess(param_1 + 0x40,auStack_90,0x21,0);
      uVar1 = *(undefined8 *)(lVar9 + 0x20);
      uVar2 = *(undefined8 *)(lVar9 + 0x28);
      FUN_100008184(uVar1,uVar2);
      FUN_100082504(0,1);
      _swift_endAccess(auStack_90);
      FUN_100006cdc(uVar1,uVar2);
      uVar3 = *(long *)(param_1 + 0x38) - param_2;
      if (SBORROW8(*(long *)(param_1 + 0x38),param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d0214);
        (*pcVar4)();
      }
      *(ulong *)(param_1 + 0x38) = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    }
    FUN_1001d31f0(param_3,puVar11);
    puVar7 = puVar11;
    (**(code **)(lVar8 + 0x30))(puVar11,1,lVar6);
    if ((int)puVar7 == 1) {
      FUN_100040bb4(puVar11,&DAT_100a7d408,&DAT_100812378);
      FUN_1001cf5b0(param_1);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar10,puVar11,lVar6);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar10 + -0x10) = param_1;
      *(long *)(lVar10 + -8) = lVar10;
      FUN_1003fb4bc(FUN_1001d3630,lVar10 + -0x20,0xd0000000000000a1,0x800000010089dec0,
                    0xd000000000000015,0x800000010089e0c0,0xd3,0);
      FUN_1001cd2ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),1);
      (**(code **)(lVar8 + 8))(lVar10,lVar6);
    }
  }
  return;
}

