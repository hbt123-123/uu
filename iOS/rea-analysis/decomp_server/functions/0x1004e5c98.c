// rea decompile_all
// name: FUN_1004e5c98
// address: 0x1004e5c98
// body: available
// range: 0x1004e5c98-0x1004e61eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e5c98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  long local_1a0;
  undefined1 local_198;
  long local_188;
  undefined1 local_180;
  undefined1 auStack_170 [24];
  long local_158;
  undefined1 local_150;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long local_110;
  undefined1 local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined1 local_90;
  long local_80;
  undefined1 local_78;
  undefined1 auStack_68 [24];
  
  lVar1 = param_1 + 0x10;
  _swift_beginAccess(lVar1,auStack_68,0,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    local_78 = *(undefined1 *)(param_1 + 0x18);
    pcVar2 = *(code **)(param_4 + 0x80);
    local_80 = *(long *)(param_1 + 0x10);
    FUN_10043c7c0();
    (*pcVar2)(&local_80,1,&DAT_1009c01a0,lVar1,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar1 = param_1 + 0x20;
  _swift_beginAccess(lVar1,&local_80,0,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    local_90 = *(undefined1 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x80);
    local_98 = *(long *)(param_1 + 0x20);
    FUN_10043c800();
    (*pcVar2)(&local_98,2,&DAT_1009c02c0,lVar1,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x29,&local_98,0,0);
  if ((*(char *)(param_1 + 0x29) != '\x01') ||
     ((**(code **)(param_4 + 0x68))(1,3,param_3,param_4), unaff_x21 == 0)) {
    _swift_beginAccess(param_1 + 0x2c,auStack_b0,0,0);
    if ((*(int *)(param_1 + 0x2c) == 0) ||
       ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x2c),4,param_3,param_4), unaff_x21 == 0))
    {
      _swift_beginAccess(param_1 + 0x30,auStack_c8,0,0);
      if ((*(int *)(param_1 + 0x30) == 0) ||
         ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x30),5,param_3,param_4), unaff_x21 == 0)
         ) {
        _swift_beginAccess(param_1 + 0x34,auStack_e0,0,0);
        if ((*(int *)(param_1 + 0x34) == 0) ||
           ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x34),6,param_3,param_4),
           unaff_x21 == 0)) {
          lVar1 = param_1 + 0x38;
          _swift_beginAccess(lVar1,auStack_f8,0,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            local_108 = *(undefined1 *)(param_1 + 0x40);
            pcVar2 = *(code **)(param_4 + 0x80);
            local_110 = *(long *)(param_1 + 0x38);
            FUN_10043c880();
            (*pcVar2)(&local_110,7,&DAT_1009c0590,lVar1,param_3,param_4);
            if (unaff_x21 != 0) {
              return;
            }
          }
          _swift_beginAccess(param_1 + 0x44,&local_110,0,0);
          if ((*(int *)(param_1 + 0x44) == 0) ||
             ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x44),8,param_3,param_4),
             unaff_x21 == 0)) {
            _swift_beginAccess(param_1 + 0x48,auStack_128,0,0);
            if ((*(int *)(param_1 + 0x48) == 0) ||
               ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x48),9,param_3,param_4),
               unaff_x21 == 0)) {
              lVar1 = param_1 + 0x50;
              _swift_beginAccess(lVar1,auStack_140,0,0);
              if (*(long *)(param_1 + 0x50) != 0) {
                local_150 = *(undefined1 *)(param_1 + 0x58);
                pcVar2 = *(code **)(param_4 + 0x80);
                local_158 = *(long *)(param_1 + 0x50);
                FUN_10043c840();
                (*pcVar2)(&local_158,10,&DAT_1009c0500,lVar1,param_3,param_4);
                if (unaff_x21 != 0) {
                  return;
                }
              }
              _swift_beginAccess(param_1 + 0x59,&local_158,0,0);
              if ((*(char *)(param_1 + 0x59) != '\x01') ||
                 ((**(code **)(param_4 + 0x68))(1,0xb,param_3,param_4), unaff_x21 == 0)) {
                lVar1 = param_1 + 0x60;
                _swift_beginAccess(lVar1,auStack_170,0,0);
                if (*(long *)(param_1 + 0x60) != 0) {
                  local_180 = *(undefined1 *)(param_1 + 0x68);
                  pcVar2 = *(code **)(param_4 + 0x80);
                  local_188 = *(long *)(param_1 + 0x60);
                  FUN_10043c800();
                  (*pcVar2)(&local_188,0xc,&DAT_1009c02c0,lVar1,param_3,param_4);
                  if (unaff_x21 != 0) {
                    return;
                  }
                }
                lVar1 = param_1 + 0x70;
                _swift_beginAccess(lVar1,&local_188,0,0);
                if (*(long *)(param_1 + 0x70) != 0) {
                  local_198 = *(undefined1 *)(param_1 + 0x78);
                  pcVar2 = *(code **)(param_4 + 0x80);
                  local_1a0 = *(long *)(param_1 + 0x70);
                  FUN_10043c900();
                  (*pcVar2)(&local_1a0,0xd,&DAT_1009c0350,lVar1,param_3,param_4);
                  if (unaff_x21 != 0) {
                    return;
                  }
                }
                _swift_beginAccess(param_1 + 0x7c,&local_1a0,0,0);
                if ((*(int *)(param_1 + 0x7c) == 0) ||
                   ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x7c),0xe,param_3,param_4),
                   unaff_x21 == 0)) {
                  _swift_beginAccess(param_1 + 0x80,auStack_1b8,0,0);
                  if ((*(int *)(param_1 + 0x80) == 0) ||
                     ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x80),0xf,param_3,param_4),
                     unaff_x21 == 0)) {
                    _swift_beginAccess(param_1 + 0x84,auStack_1d0,0,0);
                    if ((*(int *)(param_1 + 0x84) == 0) ||
                       ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x84),0x10,param_3,param_4)
                       , unaff_x21 == 0)) {
                      _swift_beginAccess(param_1 + 0x88,auStack_1e8,0,0);
                      if ((*(int *)(param_1 + 0x88) == 0) ||
                         ((**(code **)(param_4 + 0x18))
                                    (*(int *)(param_1 + 0x88),0x11,param_3,param_4), unaff_x21 == 0)
                         ) {
                        _swift_beginAccess(param_1 + 0x8c,auStack_200,0,0);
                        if (*(int *)(param_1 + 0x8c) != 0) {
                          (**(code **)(param_4 + 0x18))
                                    (*(int *)(param_1 + 0x8c),0x12,param_3,param_4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

