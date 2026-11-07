// rea decompile_all
// name: FUN_100089674
// address: 0x100089674
// body: available
// range: 0x100089674-0x100089887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100089674(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  undefined1 local_d8;
  long local_d0 [3];
  undefined *local_b8;
  long alStack_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_88 = in_x4[1];
  local_90 = *in_x4;
  uStack_78 = in_x4[3];
  uStack_80 = in_x4[2];
  local_70 = in_x4[4];
  FUN_1000997ac(&local_118,in_x5,in_x6,in_x7);
  if (local_110 == 0) {
    FUN_10001fc18(&local_118,&DAT_100104818,&DAT_1000d62d0);
    local_d0[1] = 0;
    local_d0[0] = 0;
    local_b8 = (undefined *)0x0;
    local_d0[2] = 0;
  }
  else {
    FUN_1000866dc(auStack_100,local_d0);
    FUN_100065194(&local_118);
    if (local_b8 != (undefined *)0x0) {
      FUN_100020a9c(local_d0,alStack_b0);
      FUN_100033a18(alStack_b0,&local_118);
      puVar1 = PTR___sSiN_1000f03e8;
      plVar4 = local_d0;
      _swift_dynamicCast(plVar4,&local_118,PTR___sypN_1000f0728 + 8,PTR___sSiN_1000f03e8,6);
      if (((ulong)plVar4 & 1) != 0) {
        bVar3 = SCARRY8(local_d0[0],1);
        local_d0[0] = local_d0[0] + 1;
        if (!bVar3) {
          local_b8 = puVar1;
          FUN_1000866dc(local_d0,auStack_100);
          local_d8 = 1;
          local_118 = in_x5;
          local_110 = in_x6;
          local_108 = in_x7;
          local_e0 = param_1;
          _swift_bridgeObjectRetain(in_x6);
          _swift_bridgeObjectRetain(in_x7);
          _swift_bridgeObjectRetain(param_1);
          FUN_100099afc(&local_118);
          FUN_100065194(&local_118);
          FUN_100001428(alStack_b0);
          FUN_10001fc18(local_d0,&DAT_100104198,&DAT_1000d5180);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100089888);
        (*pcVar2)();
      }
      plVar4 = alStack_b0;
      FUN_100001428();
      goto LAB_100089810;
    }
  }
  plVar4 = local_d0;
  FUN_10001fc18(plVar4,&DAT_100104198,&DAT_1000d5180);
LAB_100089810:
  FUN_100054664();
  _swift_allocError(&DAT_1000fa8c8,plVar4,0,0);
  *plVar4 = 3;
  plVar4[2] = 0;
  plVar4[1] = 0;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[9] = 0;
  *(undefined1 *)(plVar4 + 10) = 0x11;
  _swift_willThrow();
  return;
}

